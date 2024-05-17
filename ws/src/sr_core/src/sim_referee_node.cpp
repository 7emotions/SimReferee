#include <cstdio>
#include <memory>
#include <rclcpp/executors.hpp>
#include <rclcpp/utilities.hpp>

#include "sr_core/referee_serial.hpp"

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<sim_referee::core::SimReferee>());
    rclcpp::shutdown();
    return 0;
}