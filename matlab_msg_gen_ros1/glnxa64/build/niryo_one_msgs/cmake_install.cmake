# Install script for directory: /home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/niryo_one_msgs/msg" TYPE FILE FILES
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ConveyorFeedback.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/DigitalIOState.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/HardwareStatus.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/LogStatus.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/MatlabMoveResult.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ObjectPose.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Position.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ProcessState.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RPY.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotMoveCommand.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/RobotState.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Sequence.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SequenceAutorunStatus.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ShiftPose.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/SoftwareVersion.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/ToolCommand.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/Trajectory.msg"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/msg/TrajectoryPlan.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/niryo_one_msgs/srv" TYPE FILE FILES
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeHardwareVersion.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ChangeMotorConfig.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/CloseGripper.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ControlConveyor.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugColorDetection.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/DebugMarkers.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditGrip.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/EditWorkspace.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetCalibrationCam.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetDigitalIO.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetInt.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetPositionList.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetSequenceList.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTargetPose.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetTrajectoryList.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceList.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRatio.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/GetWorkspaceRobotPoses.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManagePosition.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageProcess.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageSequence.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ManageTrajectory.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/ObjDetection.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/OpenGripper.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PingDxlTool.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PullAirVacuumPump.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/PushAirVacuumPump.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/RobotMove.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SendCustomDxlValue.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetBool.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetCalibrationCam.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetConveyor.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetDigitalIO.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetInt.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetLeds.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetSequenceAutorun.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/SetString.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/TakePicture.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/UpdateConveyorId.srv"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/srv/generatetraj.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/niryo_one_msgs/cmake" TYPE FILE FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/build/niryo_one_msgs/catkin_generated/installspace/niryo_one_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/devel/include/niryo_one_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/home/niryo/.matlab/R2020b/ros1/glnxa64/venv/bin/python2" -m compileall "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/devel/lib/python2.7/dist-packages/niryo_one_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/devel/lib/python2.7/dist-packages/niryo_one_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/build/niryo_one_msgs/catkin_generated/installspace/niryo_one_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/niryo_one_msgs/cmake" TYPE FILE FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/build/niryo_one_msgs/catkin_generated/installspace/niryo_one_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/niryo_one_msgs/cmake" TYPE FILE FILES
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/build/niryo_one_msgs/catkin_generated/installspace/niryo_one_msgsConfig.cmake"
    "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/build/niryo_one_msgs/catkin_generated/installspace/niryo_one_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/niryo_one_msgs" TYPE FILE FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/devel/lib/libniryo_one_msgs_matlab.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libniryo_one_msgs_matlab.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libniryo_one_msgs_matlab.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libniryo_one_msgs_matlab.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/m/" TYPE DIRECTORY FILES "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/niryo_one_msgs/m/" FILES_MATCHING REGEX "/[^/]*\\.m$")
endif()

