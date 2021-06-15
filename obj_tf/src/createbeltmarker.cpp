#include <ros/ros.h>
#include <visualization_msgs/Marker.h>

int main( int argc, char** argv )
{
  ros::init(argc, argv, "createbeltmarker");
  ros::NodeHandle n;
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 10);

  ros::Rate r(30);

  float f = 0.0;
  while (ros::ok())
  {

    visualization_msgs::Marker line_strip1,line_strip2,line_strip3,line_strip4;
    line_strip1.header.frame_id = line_strip2.header.frame_id = line_strip3.header.frame_id = line_strip4.header.frame_id= "/base_link";
    line_strip1.header.stamp = line_strip2.header.stamp = line_strip3.header.stamp = line_strip4.header.stamp = ros::Time::now();
    line_strip1.ns = line_strip2.ns = line_strip3.ns = line_strip4.ns = "lines";
    line_strip1.action = line_strip2.action = line_strip3.action = line_strip4.action = visualization_msgs::Marker::ADD;
    line_strip1.pose.orientation.w  = line_strip2.pose.orientation.w = line_strip3.pose.orientation.w = line_strip4.pose.orientation.w = 1.0;

    line_strip1.id = 1;
    line_strip2.id = 2;
    line_strip3.id = 3;
    line_strip4.id = 4;
    line_strip1.type = line_strip2.type = line_strip3.type = line_strip4.type = visualization_msgs::Marker::LINE_STRIP;

    // line_strip1/LINE_LIST markers use only the x component of scale, for the line width
    line_strip1.scale.x = line_strip2.scale.x = line_strip3.scale.x = line_strip4.scale.x = 0.01;
 
    // Line strip is blue
    line_strip1.color.g = line_strip2.color.g = line_strip3.color.g = line_strip4.color.g = 0.6;
    line_strip1.color.b = line_strip2.color.b = line_strip3.color.b = line_strip4.color.b = 0.3;
    line_strip1.color.a = line_strip2.color.a = line_strip3.color.a = line_strip4.color.a = 1.0;

    // Create the vertices for the points and lines
    for (int32_t i = -200; i < 100; ++i)
    {
      geometry_msgs::Point p;
      p.x = 0.1;
      p.y = float(i)/100.0;
      p.z = 0;

      line_strip1.points.push_back(p);

    }

    for (int32_t i = 10;i<90;i++)
    {
        geometry_msgs::Point p;
        p.x = float(i)/100.0;
        p.y = 1;
        p.z = 0;

        line_strip2.points.push_back(p);
    }

    for (int32_t i = -200; i < 100; ++i)
    {
      geometry_msgs::Point p;
      p.x = 0.9;
      p.y = float(i)/100.0;
      p.z = 0;

      line_strip3.points.push_back(p);

    }
    
    for (int32_t i = 10;i<90;i++)
    {
        geometry_msgs::Point p;
        p.x = float(i)/100.0;
        p.y = -2;
        p.z = 0;

        line_strip4.points.push_back(p);
    }

    marker_pub.publish(line_strip1);
    marker_pub.publish(line_strip2);
    marker_pub.publish(line_strip3);
    marker_pub.publish(line_strip4);
    r.sleep();

    f += 0.04;
  }
}
