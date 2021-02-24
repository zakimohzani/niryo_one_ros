#include <ros/ros.h>

int main(int argc, char** argv) {

    ros::init(argc, argv, "move_arm_node");
    ros::NodeHandle nh;
    ros::Rate loop_rate(1.0/2.0); 
    
    while (ros::ok()) 
    {
        ROS_INFO("Cpp code is here");
        ros::spinOnce();
        loop_rate.sleep(); 
    }

    return 0;
}

