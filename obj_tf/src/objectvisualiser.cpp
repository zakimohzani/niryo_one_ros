#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <obj_tf/ObjVisualiser.h>

int objectcounter = 0;
ros::Publisher marker_pub;

void callback(const obj_tf::ObjVisualiser msg)
{
  ros::NodeHandle r;
  ::marker_pub = r.advertise<visualization_msgs::Marker>("visualization_marker", 1);

  // if(msg.plastictype == 0){
  //   uint32_t shape = visualization_msgs::Marker::CUBE;
  // }
  // else{
  //   uint32_t shape = visualization_msgs::Marker::CYLINDER;
  // }
  while(ros::ok())
  {
    visualization_msgs::Marker marker;
    // Set the frame ID and timestamp.  See the TF tutorials for information on these.
    marker.header.frame_id = msg.name;
    marker.header.stamp = ros::Time::now();

    // Set the namespace and id for this marker.  This serves to create a unique ID
    // Any marker sent with the same namespace and id will overwrite the old one
    marker.ns = msg.name;
    marker.id = ::objectcounter;
    ::objectcounter += 1;
    // Set the marker type.  Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
    if(msg.plastictype == 0){
      marker.type = visualization_msgs::Marker::CUBE;
    }
    else{
      marker.type = visualization_msgs::Marker::CYLINDER;
    }

    // Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
    marker.action = visualization_msgs::Marker::ADD;

    // Set the pose of the marker.  This is a full 6DOF pose relative to the frame/time specified in the header
    marker.pose.position.x = 0;
    marker.pose.position.y = 0;
    marker.pose.position.z = 0;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    // Set the scale of the marker -- 1x1x1 here means 1m on a side
    marker.scale.x = 0.1;
    marker.scale.y = 0.1;
    marker.scale.z = 0.1;

    // Set the color -- be sure to set alpha to something non-zero!
    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

    marker.lifetime = ros::Duration(1000);
    marker.frame_locked = true;
    // Publish the marker
    ::marker_pub.publish(marker);
  }
}

int main( int argc, char** argv )
{
  ros::init(argc, argv, "objectvisualiser");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("objVisualiser", 1000, callback);
  ros::Rate r(50);
  r.sleep();
  ros::spin();
}
