# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "obj_tf: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iobj_tf:/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg;-Istd_msgs:/usr/local/MATLAB/R2020b/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(obj_tf_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg/ObjRecognised.msg" NAME_WE)
add_custom_target(_obj_tf_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "obj_tf" "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg/ObjRecognised.msg" ""
)

#
#  langs = gencpp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(obj_tf
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg/ObjRecognised.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/obj_tf
)

### Generating Services

### Generating Module File
_generate_module_cpp(obj_tf
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/obj_tf
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(obj_tf_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(obj_tf_generate_messages obj_tf_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg/ObjRecognised.msg" NAME_WE)
add_dependencies(obj_tf_generate_messages_cpp _obj_tf_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(obj_tf_gencpp)
add_dependencies(obj_tf_gencpp obj_tf_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS obj_tf_generate_messages_cpp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(obj_tf
  "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg/ObjRecognised.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/obj_tf
)

### Generating Services

### Generating Module File
_generate_module_py(obj_tf
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/obj_tf
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(obj_tf_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(obj_tf_generate_messages obj_tf_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/niryo/catkin_ws/src/matlab_msg_gen_ros1/glnxa64/src/obj_tf/msg/ObjRecognised.msg" NAME_WE)
add_dependencies(obj_tf_generate_messages_py _obj_tf_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(obj_tf_genpy)
add_dependencies(obj_tf_genpy obj_tf_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS obj_tf_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/obj_tf)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/obj_tf
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(obj_tf_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/obj_tf)
  install(CODE "execute_process(COMMAND \"/home/niryo/.matlab/R2020b/ros1/glnxa64/venv/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/obj_tf\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/obj_tf
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(obj_tf_generate_messages_py std_msgs_generate_messages_py)
endif()
