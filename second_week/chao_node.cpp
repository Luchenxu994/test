#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char  *argv[])
{
    ros::init(argc, argv, "chao_node");
    printf("Hello World!\n");

    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("kuai_shang_che",10);

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        printf("别投\n");
        std_msgs::String msg;
        msg.data = "国服马超，带飞";
        pub.publish(msg);
        loop_rate.sleep();

    }
    
    return 0;
}
