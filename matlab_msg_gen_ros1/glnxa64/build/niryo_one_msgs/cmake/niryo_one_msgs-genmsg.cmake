# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "niryo_one_msgs: 18 messages, 40 services")

set(MSG_I_FLAGS "-Iniryo_one_msgs:/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg;-Istd_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg;-Igeometry_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg;-Imoveit_msgs:/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg;-Isensor_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg;-Istd_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg;-Iactionlib:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg;-Iobject_recognition_msgs:/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg;-Ioctomap_msgs:/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/octomap_msgs/cmake/../msg;-Ishape_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg;-Itrajectory_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg;-Iactionlib_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(niryo_one_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv" "shape_msgs/SolidPrimitive:object_recognition_msgs/ObjectType:geometry_msgs/Transform:geometry_msgs/Wrench:trajectory_msgs/MultiDOFJointTrajectory:shape_msgs/Plane:std_msgs/Header:geometry_msgs/Pose:niryo_one_msgs/TrajectoryPlan:geometry_msgs/Twist:moveit_msgs/RobotState:shape_msgs/MeshTriangle:trajectory_msgs/MultiDOFJointTrajectoryPoint:niryo_one_msgs/Trajectory:geometry_msgs/Point:trajectory_msgs/JointTrajectory:sensor_msgs/MultiDOFJointState:trajectory_msgs/JointTrajectoryPoint:moveit_msgs/AttachedCollisionObject:geometry_msgs/Quaternion:sensor_msgs/JointState:shape_msgs/Mesh:moveit_msgs/RobotTrajectory:moveit_msgs/CollisionObject:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv" "shape_msgs/SolidPrimitive:object_recognition_msgs/ObjectType:geometry_msgs/Transform:geometry_msgs/Pose:trajectory_msgs/MultiDOFJointTrajectory:shape_msgs/Plane:niryo_one_msgs/ShiftPose:std_msgs/Header:geometry_msgs/Wrench:niryo_one_msgs/TrajectoryPlan:geometry_msgs/Twist:moveit_msgs/RobotState:shape_msgs/MeshTriangle:trajectory_msgs/MultiDOFJointTrajectoryPoint:niryo_one_msgs/ToolCommand:geometry_msgs/Point:trajectory_msgs/JointTrajectory:sensor_msgs/MultiDOFJointState:trajectory_msgs/JointTrajectoryPoint:moveit_msgs/AttachedCollisionObject:geometry_msgs/Quaternion:sensor_msgs/JointState:shape_msgs/Mesh:moveit_msgs/RobotTrajectory:niryo_one_msgs/RPY:moveit_msgs/CollisionObject:geometry_msgs/Vector3:niryo_one_msgs/RobotMoveCommand"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv" "sensor_msgs/CameraInfo:std_msgs/Header:sensor_msgs/RegionOfInterest:std_msgs/Empty"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg" "niryo_one_msgs/RPY:geometry_msgs/Point"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg" "shape_msgs/SolidPrimitive:object_recognition_msgs/ObjectType:geometry_msgs/Transform:geometry_msgs/Wrench:trajectory_msgs/MultiDOFJointTrajectory:shape_msgs/Plane:std_msgs/Header:geometry_msgs/Pose:trajectory_msgs/JointTrajectory:geometry_msgs/Twist:moveit_msgs/RobotState:shape_msgs/MeshTriangle:trajectory_msgs/MultiDOFJointTrajectoryPoint:geometry_msgs/Point:sensor_msgs/MultiDOFJointState:trajectory_msgs/JointTrajectoryPoint:moveit_msgs/AttachedCollisionObject:geometry_msgs/Quaternion:sensor_msgs/JointState:shape_msgs/Mesh:moveit_msgs/RobotTrajectory:moveit_msgs/CollisionObject:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv" "sensor_msgs/CompressedImage:std_msgs/Header"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv" "geometry_msgs/Point:niryo_one_msgs/RPY:geometry_msgs/Quaternion:niryo_one_msgs/Position"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv" "niryo_one_msgs/Sequence"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv" "geometry_msgs/Point:niryo_one_msgs/RPY:geometry_msgs/Quaternion:niryo_one_msgs/Position"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv" "niryo_one_msgs/RPY:geometry_msgs/Point:niryo_one_msgs/RobotState"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv" "niryo_one_msgs/RPY:geometry_msgs/Point:niryo_one_msgs/RobotState"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv" "niryo_one_msgs/RPY:geometry_msgs/Point:niryo_one_msgs/RobotState"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv" "sensor_msgs/CompressedImage:std_msgs/Header:niryo_one_msgs/ObjectPose"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg" "geometry_msgs/Point:niryo_one_msgs/RPY:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv" "niryo_one_msgs/Sequence"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv" "shape_msgs/SolidPrimitive:object_recognition_msgs/ObjectType:geometry_msgs/Transform:geometry_msgs/Wrench:trajectory_msgs/MultiDOFJointTrajectory:shape_msgs/Plane:std_msgs/Header:geometry_msgs/Pose:niryo_one_msgs/TrajectoryPlan:geometry_msgs/Twist:moveit_msgs/RobotState:shape_msgs/MeshTriangle:trajectory_msgs/MultiDOFJointTrajectoryPoint:niryo_one_msgs/Trajectory:geometry_msgs/Point:trajectory_msgs/JointTrajectory:sensor_msgs/MultiDOFJointState:trajectory_msgs/JointTrajectoryPoint:moveit_msgs/AttachedCollisionObject:geometry_msgs/Quaternion:sensor_msgs/JointState:shape_msgs/Mesh:moveit_msgs/RobotTrajectory:moveit_msgs/CollisionObject:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg" "shape_msgs/SolidPrimitive:object_recognition_msgs/ObjectType:geometry_msgs/Transform:geometry_msgs/Wrench:trajectory_msgs/MultiDOFJointTrajectory:shape_msgs/Plane:std_msgs/Header:geometry_msgs/Pose:niryo_one_msgs/TrajectoryPlan:geometry_msgs/Twist:moveit_msgs/RobotState:shape_msgs/MeshTriangle:trajectory_msgs/MultiDOFJointTrajectoryPoint:geometry_msgs/Point:trajectory_msgs/JointTrajectory:sensor_msgs/MultiDOFJointState:trajectory_msgs/JointTrajectoryPoint:moveit_msgs/AttachedCollisionObject:geometry_msgs/Quaternion:sensor_msgs/JointState:shape_msgs/Mesh:moveit_msgs/RobotTrajectory:moveit_msgs/CollisionObject:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv" "niryo_one_msgs/RPY:geometry_msgs/Point:niryo_one_msgs/RobotState"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv" "sensor_msgs/CompressedImage:std_msgs/Header"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg" "shape_msgs/SolidPrimitive:object_recognition_msgs/ObjectType:geometry_msgs/Transform:geometry_msgs/Pose:trajectory_msgs/MultiDOFJointTrajectory:shape_msgs/Plane:niryo_one_msgs/ShiftPose:std_msgs/Header:geometry_msgs/Wrench:niryo_one_msgs/TrajectoryPlan:geometry_msgs/Twist:moveit_msgs/RobotState:shape_msgs/MeshTriangle:trajectory_msgs/MultiDOFJointTrajectoryPoint:niryo_one_msgs/ToolCommand:geometry_msgs/Point:trajectory_msgs/JointTrajectory:sensor_msgs/MultiDOFJointState:trajectory_msgs/JointTrajectoryPoint:moveit_msgs/AttachedCollisionObject:geometry_msgs/Quaternion:sensor_msgs/JointState:shape_msgs/Mesh:moveit_msgs/RobotTrajectory:niryo_one_msgs/RPY:moveit_msgs/CollisionObject:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv" ""
)

get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv" NAME_WE)
add_custom_target(_niryo_one_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "niryo_one_msgs" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv" ""
)

#
#  langs = gencpp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)

### Generating Services
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Empty.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CompressedImage.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CompressedImage.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CompressedImage.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_cpp(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
)

### Generating Module File
_generate_module_cpp(niryo_one_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(niryo_one_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(niryo_one_msgs_generate_messages niryo_one_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_cpp _niryo_one_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(niryo_one_msgs_gencpp)
add_dependencies(niryo_one_msgs_gencpp niryo_one_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS niryo_one_msgs_generate_messages_cpp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_msg_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)

### Generating Services
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Empty.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CompressedImage.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CompressedImage.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Transform.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Wrench.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Plane.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Pose.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Twist.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/MultiDOFJointTrajectoryPoint.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/MultiDOFJointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/AttachedCollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/JointState.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/shape_msgs/cmake/../msg/Mesh.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/RobotTrajectory.msg;/usr/local/MATLAB/R2020b/toolbox/ros/mlroscpp/custom_messages/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg/CompressedImage.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv"
  "${MSG_I_FLAGS}"
  "/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv"
  "${MSG_I_FLAGS}"
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg;/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg/Point.msg;/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)
_generate_srv_py(niryo_one_msgs
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
)

### Generating Module File
_generate_module_py(niryo_one_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(niryo_one_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(niryo_one_msgs_generate_messages niryo_one_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv" NAME_WE)
add_dependencies(niryo_one_msgs_generate_messages_py _niryo_one_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(niryo_one_msgs_genpy)
add_dependencies(niryo_one_msgs_genpy niryo_one_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS niryo_one_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/niryo_one_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(niryo_one_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(niryo_one_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET moveit_msgs_generate_messages_cpp)
  add_dependencies(niryo_one_msgs_generate_messages_cpp moveit_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(niryo_one_msgs_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(niryo_one_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs)
  install(CODE "execute_process(COMMAND \"/home/niryo/.matlab/R2020b/ros1/glnxa64/venv/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/niryo_one_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(niryo_one_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(niryo_one_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET moveit_msgs_generate_messages_py)
  add_dependencies(niryo_one_msgs_generate_messages_py moveit_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(niryo_one_msgs_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(niryo_one_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
