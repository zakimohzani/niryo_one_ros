// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for niryo_one_msgs/ManageTrajectoryResponse
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "niryo_one_msgs/ManageTrajectory.h"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#ifndef FOUNDATION_MATLABDATA_API
typedef matlab::data::Array MDArray_T;
typedef matlab::data::ArrayFactory MDFactory_T;
#else
typedef foundation::matlabdata::Array MDArray_T;
typedef foundation::matlabdata::standalone::ClientArrayFactory MDFactory_T;
#endif
namespace niryo_one_msgs {
namespace matlabhelper {
namespace ManageTrajectory_Response {
  void copy_from_arr_niryo_one_msgs_Trajectory(niryo_one_msgs::Trajectory& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_Trajectory(MDFactory_T& factory, const niryo_one_msgs::ManageTrajectory::Response::_trajectory_type& val);
  void copy_from_arr_niryo_one_msgs_TrajectoryPlan(niryo_one_msgs::TrajectoryPlan& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_niryo_one_msgs_TrajectoryPlan(MDFactory_T& factory, const niryo_one_msgs::Trajectory::_trajectory_plan_type& val);
  void copy_from_arr_moveit_msgs_RobotState(moveit_msgs::RobotState& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_moveit_msgs_RobotState(MDFactory_T& factory, const niryo_one_msgs::TrajectoryPlan::_trajectory_start_type& val);
  void copy_from_arr_sensor_msgs_JointState(sensor_msgs::JointState& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_sensor_msgs_JointState(MDFactory_T& factory, const moveit_msgs::RobotState::_joint_state_type& val);
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::JointState::_header_type& val);
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val);
  void copy_from_arr_sensor_msgs_MultiDOFJointState(sensor_msgs::MultiDOFJointState& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_sensor_msgs_MultiDOFJointState(MDFactory_T& factory, const moveit_msgs::RobotState::_multi_dof_joint_state_type& val);
  void copy_from_arr_geometry_msgs_Transform_var_arr(geometry_msgs::Transform& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_geometry_msgs_Transform_var_arr(MDFactory_T& factory, const sensor_msgs::MultiDOFJointState::_transforms_type& val);
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const geometry_msgs::Transform::_translation_type& val);
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const geometry_msgs::Transform::_rotation_type& val);
  void copy_from_arr_geometry_msgs_Twist_var_arr(geometry_msgs::Twist& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_geometry_msgs_Twist_var_arr(MDFactory_T& factory, const sensor_msgs::MultiDOFJointState::_twist_type& val);
  void copy_from_arr_geometry_msgs_Wrench_var_arr(geometry_msgs::Wrench& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_geometry_msgs_Wrench_var_arr(MDFactory_T& factory, const sensor_msgs::MultiDOFJointState::_wrench_type& val);
  void copy_from_arr_moveit_msgs_AttachedCollisionObject_var_arr(moveit_msgs::AttachedCollisionObject& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_moveit_msgs_AttachedCollisionObject_var_arr(MDFactory_T& factory, const moveit_msgs::RobotState::_attached_collision_objects_type& val);
  void copy_from_arr_moveit_msgs_CollisionObject(moveit_msgs::CollisionObject& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_moveit_msgs_CollisionObject(MDFactory_T& factory, const moveit_msgs::AttachedCollisionObject::_object_type& val);
  void copy_from_arr_object_recognition_msgs_ObjectType(object_recognition_msgs::ObjectType& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_object_recognition_msgs_ObjectType(MDFactory_T& factory, const moveit_msgs::CollisionObject::_type_type& val);
  void copy_from_arr_shape_msgs_SolidPrimitive_var_arr(shape_msgs::SolidPrimitive& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_shape_msgs_SolidPrimitive_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_primitives_type& val);
  void copy_from_arr_geometry_msgs_Pose_var_arr(geometry_msgs::Pose& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_geometry_msgs_Pose_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_primitive_poses_type& val);
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const geometry_msgs::Pose::_position_type& val);
  void copy_from_arr_shape_msgs_Mesh_var_arr(shape_msgs::Mesh& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_shape_msgs_Mesh_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_meshes_type& val);
  void copy_from_arr_shape_msgs_MeshTriangle_var_arr(shape_msgs::MeshTriangle& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_shape_msgs_MeshTriangle_var_arr(MDFactory_T& factory, const shape_msgs::Mesh::_triangles_type& val);
  void copy_from_arr_geometry_msgs_Point_var_arr(geometry_msgs::Point& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_geometry_msgs_Point_var_arr(MDFactory_T& factory, const shape_msgs::Mesh::_vertices_type& val);
  void copy_from_arr_shape_msgs_Plane_var_arr(shape_msgs::Plane& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_shape_msgs_Plane_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_planes_type& val);
  void copy_from_arr_trajectory_msgs_JointTrajectory(trajectory_msgs::JointTrajectory& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_trajectory_msgs_JointTrajectory(MDFactory_T& factory, const moveit_msgs::AttachedCollisionObject::_detach_posture_type& val);
  void copy_from_arr_trajectory_msgs_JointTrajectoryPoint_var_arr(trajectory_msgs::JointTrajectoryPoint& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_trajectory_msgs_JointTrajectoryPoint_var_arr(MDFactory_T& factory, const trajectory_msgs::JointTrajectory::_points_type& val);
  void copy_from_arr_ros_Duration(ros::Duration& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_ros_Duration(MDFactory_T& factory, const trajectory_msgs::JointTrajectoryPoint::_time_from_start_type& val);
  void copy_from_arr_moveit_msgs_RobotTrajectory(moveit_msgs::RobotTrajectory& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_moveit_msgs_RobotTrajectory(MDFactory_T& factory, const niryo_one_msgs::TrajectoryPlan::_trajectory_type& val);
  void copy_from_arr_trajectory_msgs_MultiDOFJointTrajectory(trajectory_msgs::MultiDOFJointTrajectory& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_trajectory_msgs_MultiDOFJointTrajectory(MDFactory_T& factory, const moveit_msgs::RobotTrajectory::_multi_dof_joint_trajectory_type& val);
  void copy_from_arr_trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr(trajectory_msgs::MultiDOFJointTrajectoryPoint& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr(MDFactory_T& factory, const trajectory_msgs::MultiDOFJointTrajectory::_points_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_Trajectory(niryo_one_msgs::Trajectory& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_Trajectory.id
    try {
        const matlab::data::TypedArray<int32_t> _trajectoryid_arr = arr[0]["id"];
        val.id = _trajectoryid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    // _niryo_one_msgs_Trajectory.name
    try {
        const matlab::data::CharArray _trajectoryname_arr = arr[0]["name"];
        val.name = _trajectoryname_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Trajectory.description
    try {
        const matlab::data::CharArray _trajectorydescription_arr = arr[0]["description"];
        val.description = _trajectorydescription_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'description' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_Trajectory.trajectory_plan
    try {
        const matlab::data::StructArray _trajectorytrajectory_plan_arr = arr[0]["trajectory_plan"];
        copy_from_arr_niryo_one_msgs_TrajectoryPlan(val.trajectory_plan,_trajectorytrajectory_plan_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trajectory_plan' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'trajectory_plan' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_Trajectory(MDFactory_T& factory, const niryo_one_msgs::ManageTrajectory::Response::_trajectory_type& val) {
    auto _trajectoryoutArray = factory.createStructArray({1,1},{"id","name","description","trajectory_plan"});
    // _niryo_one_msgs_Trajectory.id
    _trajectoryoutArray[0]["id"] = factory.createScalar(val.id);
    // _niryo_one_msgs_Trajectory.name
    _trajectoryoutArray[0]["name"] = factory.createCharArray(val.name);
    // _niryo_one_msgs_Trajectory.description
    _trajectoryoutArray[0]["description"] = factory.createCharArray(val.description);
    // _niryo_one_msgs_Trajectory.trajectory_plan
    _trajectoryoutArray[0]["trajectory_plan"] = get_arr_niryo_one_msgs_TrajectoryPlan(factory, val.trajectory_plan);
    return std::move(_trajectoryoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_niryo_one_msgs_TrajectoryPlan(niryo_one_msgs::TrajectoryPlan& val, const matlab::data::StructArray& arr) {
    // _niryo_one_msgs_TrajectoryPlan.trajectory_start
    try {
        const matlab::data::StructArray _trajectory_trajectory_plantrajectory_start_arr = arr[0]["trajectory_start"];
        copy_from_arr_moveit_msgs_RobotState(val.trajectory_start,_trajectory_trajectory_plantrajectory_start_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trajectory_start' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'trajectory_start' is wrong type; expected a struct.");
    }
    // _niryo_one_msgs_TrajectoryPlan.group_name
    try {
        const matlab::data::CharArray _trajectory_trajectory_plangroup_name_arr = arr[0]["group_name"];
        val.group_name = _trajectory_trajectory_plangroup_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'group_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'group_name' is wrong type; expected a string.");
    }
    // _niryo_one_msgs_TrajectoryPlan.trajectory
    try {
        const matlab::data::StructArray _trajectory_trajectory_plantrajectory_arr = arr[0]["trajectory"];
        copy_from_arr_moveit_msgs_RobotTrajectory(val.trajectory,_trajectory_trajectory_plantrajectory_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trajectory' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'trajectory' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_niryo_one_msgs_TrajectoryPlan(MDFactory_T& factory, const niryo_one_msgs::Trajectory::_trajectory_plan_type& val) {
    auto _trajectory_trajectory_planoutArray = factory.createStructArray({1,1},{"trajectory_start","group_name","trajectory"});
    // _niryo_one_msgs_TrajectoryPlan.trajectory_start
    _trajectory_trajectory_planoutArray[0]["trajectory_start"] = get_arr_moveit_msgs_RobotState(factory, val.trajectory_start);
    // _niryo_one_msgs_TrajectoryPlan.group_name
    _trajectory_trajectory_planoutArray[0]["group_name"] = factory.createCharArray(val.group_name);
    // _niryo_one_msgs_TrajectoryPlan.trajectory
    _trajectory_trajectory_planoutArray[0]["trajectory"] = get_arr_moveit_msgs_RobotTrajectory(factory, val.trajectory);
    return std::move(_trajectory_trajectory_planoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_moveit_msgs_RobotState(moveit_msgs::RobotState& val, const matlab::data::StructArray& arr) {
    // _moveit_msgs_RobotState.joint_state
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_startjoint_state_arr = arr[0]["joint_state"];
        copy_from_arr_sensor_msgs_JointState(val.joint_state,_trajectory_trajectory_plan_trajectory_startjoint_state_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_state' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joint_state' is wrong type; expected a struct.");
    }
    // _moveit_msgs_RobotState.multi_dof_joint_state
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_startmulti_dof_joint_state_arr = arr[0]["multi_dof_joint_state"];
        copy_from_arr_sensor_msgs_MultiDOFJointState(val.multi_dof_joint_state,_trajectory_trajectory_plan_trajectory_startmulti_dof_joint_state_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'multi_dof_joint_state' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'multi_dof_joint_state' is wrong type; expected a struct.");
    }
    // _moveit_msgs_RobotState.attached_collision_objects
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_startattached_collision_objects_arr = arr[0]["attached_collision_objects"];
        for (auto _attached_collision_objectsarr : _trajectory_trajectory_plan_trajectory_startattached_collision_objects_arr) {
        	moveit_msgs::AttachedCollisionObject _val;
        	copy_from_arr_moveit_msgs_AttachedCollisionObject_var_arr(_val,_attached_collision_objectsarr);
        	val.attached_collision_objects.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'attached_collision_objects' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'attached_collision_objects' is wrong type; expected a struct.");
    }
    // _moveit_msgs_RobotState.is_diff
    try {
        const matlab::data::TypedArray<bool> _trajectory_trajectory_plan_trajectory_startis_diff_arr = arr[0]["is_diff"];
        val.is_diff = _trajectory_trajectory_plan_trajectory_startis_diff_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'is_diff' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'is_diff' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_moveit_msgs_RobotState(MDFactory_T& factory, const niryo_one_msgs::TrajectoryPlan::_trajectory_start_type& val) {
    auto _trajectory_trajectory_plan_trajectory_startoutArray = factory.createStructArray({1,1},{"joint_state","multi_dof_joint_state","attached_collision_objects","is_diff"});
    // _moveit_msgs_RobotState.joint_state
    _trajectory_trajectory_plan_trajectory_startoutArray[0]["joint_state"] = get_arr_sensor_msgs_JointState(factory, val.joint_state);
    // _moveit_msgs_RobotState.multi_dof_joint_state
    _trajectory_trajectory_plan_trajectory_startoutArray[0]["multi_dof_joint_state"] = get_arr_sensor_msgs_MultiDOFJointState(factory, val.multi_dof_joint_state);
    // _moveit_msgs_RobotState.attached_collision_objects
    _trajectory_trajectory_plan_trajectory_startoutArray[0]["attached_collision_objects"] = get_arr_moveit_msgs_AttachedCollisionObject_var_arr(factory, val.attached_collision_objects);
    // _moveit_msgs_RobotState.is_diff
    _trajectory_trajectory_plan_trajectory_startoutArray[0]["is_diff"] = factory.createScalar(static_cast<bool>(val.is_diff));
    return std::move(_trajectory_trajectory_plan_trajectory_startoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_sensor_msgs_JointState(sensor_msgs::JointState& val, const matlab::data::StructArray& arr) {
    // _sensor_msgs_JointState.header
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_joint_stateheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_trajectory_trajectory_plan_trajectory_start_joint_stateheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _sensor_msgs_JointState.name
    try {
        const matlab::data::CellArray _trajectory_trajectory_plan_trajectory_start_joint_statename_cellarr = arr[0]["name"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_joint_statename_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_joint_statename_arr = _trajectory_trajectory_plan_trajectory_start_joint_statename_cellarr[idx];
        	val.name.push_back(_trajectory_trajectory_plan_trajectory_start_joint_statename_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _sensor_msgs_JointState.position
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_joint_stateposition_arr = arr[0]["position"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_joint_stateposition_arr.getNumberOfElements();
        	val.position.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_joint_stateposition_arr.begin(), _trajectory_trajectory_plan_trajectory_start_joint_stateposition_arr.begin()+nelem, val.position.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a double.");
    }
    // _sensor_msgs_JointState.velocity
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_joint_statevelocity_arr = arr[0]["velocity"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_joint_statevelocity_arr.getNumberOfElements();
        	val.velocity.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_joint_statevelocity_arr.begin(), _trajectory_trajectory_plan_trajectory_start_joint_statevelocity_arr.begin()+nelem, val.velocity.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocity' is wrong type; expected a double.");
    }
    // _sensor_msgs_JointState.effort
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_joint_stateeffort_arr = arr[0]["effort"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_joint_stateeffort_arr.getNumberOfElements();
        	val.effort.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_joint_stateeffort_arr.begin(), _trajectory_trajectory_plan_trajectory_start_joint_stateeffort_arr.begin()+nelem, val.effort.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'effort' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'effort' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_sensor_msgs_JointState(MDFactory_T& factory, const moveit_msgs::RobotState::_joint_state_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_joint_stateoutArray = factory.createStructArray({1,1},{"header","name","position","velocity","effort"});
    // _sensor_msgs_JointState.header
    _trajectory_trajectory_plan_trajectory_start_joint_stateoutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _sensor_msgs_JointState.name
    auto _trajectory_trajectory_plan_trajectory_start_joint_statenameoutCell = factory.createCellArray({1,val.name.size()});
    for(size_t idxin = 0; idxin < val.name.size(); ++ idxin){
    	_trajectory_trajectory_plan_trajectory_start_joint_statenameoutCell[idxin] = factory.createCharArray(val.name[idxin]);
    }
    _trajectory_trajectory_plan_trajectory_start_joint_stateoutArray[0]["name"] = _trajectory_trajectory_plan_trajectory_start_joint_statenameoutCell;
    // _sensor_msgs_JointState.position
    _trajectory_trajectory_plan_trajectory_start_joint_stateoutArray[0]["position"] = factory.createArray<sensor_msgs::JointState::_position_type::const_iterator, double>({1, val.position.size()}, val.position.begin(), val.position.end());
    // _sensor_msgs_JointState.velocity
    _trajectory_trajectory_plan_trajectory_start_joint_stateoutArray[0]["velocity"] = factory.createArray<sensor_msgs::JointState::_velocity_type::const_iterator, double>({1, val.velocity.size()}, val.velocity.begin(), val.velocity.end());
    // _sensor_msgs_JointState.effort
    _trajectory_trajectory_plan_trajectory_start_joint_stateoutArray[0]["effort"] = factory.createArray<sensor_msgs::JointState::_effort_type::const_iterator, double>({1, val.effort.size()}, val.effort.begin(), val.effort.end());
    return std::move(_trajectory_trajectory_plan_trajectory_start_joint_stateoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_std_msgs_Header(std_msgs::Header& val, const matlab::data::StructArray& arr) {
    // _std_msgs_Header.seq
    try {
        const matlab::data::TypedArray<uint32_t> _trajectory_trajectory_plan_trajectory_start_joint_state_headerseq_arr = arr[0]["seq"];
        val.seq = _trajectory_trajectory_plan_trajectory_start_joint_state_headerseq_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seq' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'seq' is wrong type; expected a uint32.");
    }
    // _std_msgs_Header.stamp
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_joint_state_headerstamp_arr = arr[0]["stamp"];
        copy_from_arr_ros_Time(val.stamp,_trajectory_trajectory_plan_trajectory_start_joint_state_headerstamp_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'stamp' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'stamp' is wrong type; expected a struct.");
    }
    // _std_msgs_Header.frame_id
    try {
        const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_joint_state_headerframe_id_arr = arr[0]["frame_id"];
        val.frame_id = _trajectory_trajectory_plan_trajectory_start_joint_state_headerframe_id_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'frame_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'frame_id' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_std_msgs_Header(MDFactory_T& factory, const sensor_msgs::JointState::_header_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_joint_state_headeroutArray = factory.createStructArray({1,1},{"seq","stamp","frame_id"});
    // _std_msgs_Header.seq
    _trajectory_trajectory_plan_trajectory_start_joint_state_headeroutArray[0]["seq"] = factory.createScalar(val.seq);
    // _std_msgs_Header.stamp
    _trajectory_trajectory_plan_trajectory_start_joint_state_headeroutArray[0]["stamp"] = get_arr_ros_Time(factory, val.stamp);
    // _std_msgs_Header.frame_id
    _trajectory_trajectory_plan_trajectory_start_joint_state_headeroutArray[0]["frame_id"] = factory.createCharArray(val.frame_id);
    return std::move(_trajectory_trajectory_plan_trajectory_start_joint_state_headeroutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Time(ros::Time& val, const matlab::data::StructArray& arr) {
    // _ros_Time.sec
    try {
        const matlab::data::TypedArray<uint32_t> _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampsec_arr = arr[0]["sec"];
        val.sec = _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a uint32.");
    }
    // _ros_Time.nsec
    try {
        const matlab::data::TypedArray<uint32_t> _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampnsec_arr = arr[0]["nsec"];
        val.nsec = _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Time(MDFactory_T& factory, const std_msgs::Header::_stamp_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Time.sec
    _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Time.nsec
    _trajectory_trajectory_plan_trajectory_start_joint_state_header_stampoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_trajectory_trajectory_plan_trajectory_start_joint_state_header_stampoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_sensor_msgs_MultiDOFJointState(sensor_msgs::MultiDOFJointState& val, const matlab::data::StructArray& arr) {
    // _sensor_msgs_MultiDOFJointState.header
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _sensor_msgs_MultiDOFJointState.joint_names
    try {
        const matlab::data::CellArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_names_cellarr = arr[0]["joint_names"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_names_arr = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_names_cellarr[idx];
        	val.joint_names.push_back(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_names' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joint_names' is wrong type; expected a string.");
    }
    // _sensor_msgs_MultiDOFJointState.transforms
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statetransforms_arr = arr[0]["transforms"];
        for (auto _transformsarr : _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statetransforms_arr) {
        	geometry_msgs::Transform _val;
        	copy_from_arr_geometry_msgs_Transform_var_arr(_val,_transformsarr);
        	val.transforms.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'transforms' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'transforms' is wrong type; expected a struct.");
    }
    // _sensor_msgs_MultiDOFJointState.twist
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statetwist_arr = arr[0]["twist"];
        for (auto _twistarr : _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statetwist_arr) {
        	geometry_msgs::Twist _val;
        	copy_from_arr_geometry_msgs_Twist_var_arr(_val,_twistarr);
        	val.twist.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'twist' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'twist' is wrong type; expected a struct.");
    }
    // _sensor_msgs_MultiDOFJointState.wrench
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statewrench_arr = arr[0]["wrench"];
        for (auto _wrencharr : _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statewrench_arr) {
        	geometry_msgs::Wrench _val;
        	copy_from_arr_geometry_msgs_Wrench_var_arr(_val,_wrencharr);
        	val.wrench.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wrench' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'wrench' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_sensor_msgs_MultiDOFJointState(MDFactory_T& factory, const moveit_msgs::RobotState::_multi_dof_joint_state_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray = factory.createStructArray({1,1},{"header","joint_names","transforms","twist","wrench"});
    // _sensor_msgs_MultiDOFJointState.header
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _sensor_msgs_MultiDOFJointState.joint_names
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_namesoutCell = factory.createCellArray({1,val.joint_names.size()});
    for(size_t idxin = 0; idxin < val.joint_names.size(); ++ idxin){
    	_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_namesoutCell[idxin] = factory.createCharArray(val.joint_names[idxin]);
    }
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray[0]["joint_names"] = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_statejoint_namesoutCell;
    // _sensor_msgs_MultiDOFJointState.transforms
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray[0]["transforms"] = get_arr_geometry_msgs_Transform_var_arr(factory, val.transforms);
    // _sensor_msgs_MultiDOFJointState.twist
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray[0]["twist"] = get_arr_geometry_msgs_Twist_var_arr(factory, val.twist);
    // _sensor_msgs_MultiDOFJointState.wrench
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray[0]["wrench"] = get_arr_geometry_msgs_Wrench_var_arr(factory, val.wrench);
    return std::move(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_stateoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Transform_var_arr(geometry_msgs::Transform& val, const matlab::data::Struct& arr) {
    // _geometry_msgs_Transform_var_arr.translation
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformstranslation_arr = arr["translation"];
        copy_from_arr_geometry_msgs_Vector3(val.translation,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformstranslation_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'translation' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'translation' is wrong type; expected a struct.");
    }
    // _geometry_msgs_Transform_var_arr.rotation
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformsrotation_arr = arr["rotation"];
        copy_from_arr_geometry_msgs_Quaternion(val.rotation,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformsrotation_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'rotation' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'rotation' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Transform_var_arr(MDFactory_T& factory, const sensor_msgs::MultiDOFJointState::_transforms_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformsoutArray = factory.createStructArray({1,val.size()},{"translation","rotation"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _geometry_msgs_Transform_var_arr.translation
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformsoutArray[idx]["translation"] = get_arr_geometry_msgs_Vector3(factory, val[idx].translation);
    // _geometry_msgs_Transform_var_arr.rotation
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformsoutArray[idx]["rotation"] = get_arr_geometry_msgs_Quaternion(factory, val[idx].rotation);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transformsoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Vector3(geometry_msgs::Vector3& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Vector3.x
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationx_arr = arr[0]["x"];
        val.x = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.y
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationy_arr = arr[0]["y"];
        val.y = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Vector3.z
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationz_arr = arr[0]["z"];
        val.z = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Vector3(MDFactory_T& factory, const geometry_msgs::Transform::_translation_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Vector3.x
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Vector3.y
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Vector3.z
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_translationoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Quaternion(geometry_msgs::Quaternion& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Quaternion.x
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationx_arr = arr[0]["x"];
        val.x = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.y
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationy_arr = arr[0]["y"];
        val.y = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.z
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationz_arr = arr[0]["z"];
        val.z = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
    // _geometry_msgs_Quaternion.w
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationw_arr = arr[0]["w"];
        val.w = _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'w' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'w' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Quaternion(MDFactory_T& factory, const geometry_msgs::Transform::_rotation_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationoutArray = factory.createStructArray({1,1},{"x","y","z","w"});
    // _geometry_msgs_Quaternion.x
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Quaternion.y
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Quaternion.z
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationoutArray[0]["z"] = factory.createScalar(val.z);
    // _geometry_msgs_Quaternion.w
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationoutArray[0]["w"] = factory.createScalar(val.w);
    return std::move(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_transforms_rotationoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Twist_var_arr(geometry_msgs::Twist& val, const matlab::data::Struct& arr) {
    // _geometry_msgs_Twist_var_arr.linear
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistlinear_arr = arr["linear"];
        copy_from_arr_geometry_msgs_Vector3(val.linear,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistlinear_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'linear' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'linear' is wrong type; expected a struct.");
    }
    // _geometry_msgs_Twist_var_arr.angular
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistangular_arr = arr["angular"];
        copy_from_arr_geometry_msgs_Vector3(val.angular,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistangular_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'angular' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'angular' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Twist_var_arr(MDFactory_T& factory, const sensor_msgs::MultiDOFJointState::_twist_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistoutArray = factory.createStructArray({1,val.size()},{"linear","angular"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _geometry_msgs_Twist_var_arr.linear
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistoutArray[idx]["linear"] = get_arr_geometry_msgs_Vector3(factory, val[idx].linear);
    // _geometry_msgs_Twist_var_arr.angular
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistoutArray[idx]["angular"] = get_arr_geometry_msgs_Vector3(factory, val[idx].angular);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_twistoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Wrench_var_arr(geometry_msgs::Wrench& val, const matlab::data::Struct& arr) {
    // _geometry_msgs_Wrench_var_arr.force
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchforce_arr = arr["force"];
        copy_from_arr_geometry_msgs_Vector3(val.force,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchforce_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'force' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'force' is wrong type; expected a struct.");
    }
    // _geometry_msgs_Wrench_var_arr.torque
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchtorque_arr = arr["torque"];
        copy_from_arr_geometry_msgs_Vector3(val.torque,_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchtorque_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'torque' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'torque' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Wrench_var_arr(MDFactory_T& factory, const sensor_msgs::MultiDOFJointState::_wrench_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchoutArray = factory.createStructArray({1,val.size()},{"force","torque"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _geometry_msgs_Wrench_var_arr.force
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchoutArray[idx]["force"] = get_arr_geometry_msgs_Vector3(factory, val[idx].force);
    // _geometry_msgs_Wrench_var_arr.torque
    _trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchoutArray[idx]["torque"] = get_arr_geometry_msgs_Vector3(factory, val[idx].torque);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_multi_dof_joint_state_wrenchoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_moveit_msgs_AttachedCollisionObject_var_arr(moveit_msgs::AttachedCollisionObject& val, const matlab::data::Struct& arr) {
    // _moveit_msgs_AttachedCollisionObject_var_arr.link_name
    try {
        const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objectslink_name_arr = arr["link_name"];
        val.link_name = _trajectory_trajectory_plan_trajectory_start_attached_collision_objectslink_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'link_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'link_name' is wrong type; expected a string.");
    }
    // _moveit_msgs_AttachedCollisionObject_var_arr.object
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsobject_arr = arr["object"];
        copy_from_arr_moveit_msgs_CollisionObject(val.object,_trajectory_trajectory_plan_trajectory_start_attached_collision_objectsobject_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'object' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'object' is wrong type; expected a struct.");
    }
    // _moveit_msgs_AttachedCollisionObject_var_arr.touch_links
    try {
        const matlab::data::CellArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_links_cellarr = arr["touch_links"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_links_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_links_arr = _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_links_cellarr[idx];
        	val.touch_links.push_back(_trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_links_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'touch_links' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'touch_links' is wrong type; expected a string.");
    }
    // _moveit_msgs_AttachedCollisionObject_var_arr.detach_posture
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsdetach_posture_arr = arr["detach_posture"];
        copy_from_arr_trajectory_msgs_JointTrajectory(val.detach_posture,_trajectory_trajectory_plan_trajectory_start_attached_collision_objectsdetach_posture_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'detach_posture' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'detach_posture' is wrong type; expected a struct.");
    }
    // _moveit_msgs_AttachedCollisionObject_var_arr.weight
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsweight_arr = arr["weight"];
        val.weight = _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsweight_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'weight' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'weight' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_moveit_msgs_AttachedCollisionObject_var_arr(MDFactory_T& factory, const moveit_msgs::RobotState::_attached_collision_objects_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray = factory.createStructArray({1,val.size()},{"link_name","object","touch_links","detach_posture","weight"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _moveit_msgs_AttachedCollisionObject_var_arr.link_name
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray[idx]["link_name"] = factory.createCharArray(val[idx].link_name);
    // _moveit_msgs_AttachedCollisionObject_var_arr.object
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray[idx]["object"] = get_arr_moveit_msgs_CollisionObject(factory, val[idx].object);
    // _moveit_msgs_AttachedCollisionObject_var_arr.touch_links
    	auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_linksoutCell = factory.createCellArray({1,val[idx].touch_links.size()});
    	for(size_t idxin = 0; idxin < val[idx].touch_links.size(); ++ idxin){
    		 _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_linksoutCell[idxin] = factory.createCharArray(val[idx].touch_links[idxin]);
    	}
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray[idx]["touch_links"] = _trajectory_trajectory_plan_trajectory_start_attached_collision_objectstouch_linksoutCell;
    // _moveit_msgs_AttachedCollisionObject_var_arr.detach_posture
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray[idx]["detach_posture"] = get_arr_trajectory_msgs_JointTrajectory(factory, val[idx].detach_posture);
    // _moveit_msgs_AttachedCollisionObject_var_arr.weight
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray[idx]["weight"] = factory.createScalar(val[idx].weight);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objectsoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_moveit_msgs_CollisionObject(moveit_msgs::CollisionObject& val, const matlab::data::StructArray& arr) {
    // _moveit_msgs_CollisionObject.header
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.id
    try {
        const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectid_arr = arr[0]["id"];
        val.id = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectid_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a string.");
    }
    // _moveit_msgs_CollisionObject.type
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objecttype_arr = arr[0]["type"];
        copy_from_arr_object_recognition_msgs_ObjectType(val.type,_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objecttype_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.primitives
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectprimitives_arr = arr[0]["primitives"];
        for (auto _primitivesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectprimitives_arr) {
        	shape_msgs::SolidPrimitive _val;
        	copy_from_arr_shape_msgs_SolidPrimitive_var_arr(_val,_primitivesarr);
        	val.primitives.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primitives' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'primitives' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.primitive_poses
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectprimitive_poses_arr = arr[0]["primitive_poses"];
        for (auto _primitive_posesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectprimitive_poses_arr) {
        	geometry_msgs::Pose _val;
        	copy_from_arr_geometry_msgs_Pose_var_arr(_val,_primitive_posesarr);
        	val.primitive_poses.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primitive_poses' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'primitive_poses' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.meshes
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectmeshes_arr = arr[0]["meshes"];
        for (auto _meshesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectmeshes_arr) {
        	shape_msgs::Mesh _val;
        	copy_from_arr_shape_msgs_Mesh_var_arr(_val,_meshesarr);
        	val.meshes.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'meshes' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'meshes' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.mesh_poses
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectmesh_poses_arr = arr[0]["mesh_poses"];
        for (auto _mesh_posesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectmesh_poses_arr) {
        	geometry_msgs::Pose _val;
        	copy_from_arr_geometry_msgs_Pose_var_arr(_val,_mesh_posesarr);
        	val.mesh_poses.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mesh_poses' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'mesh_poses' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.planes
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectplanes_arr = arr[0]["planes"];
        for (auto _planesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectplanes_arr) {
        	shape_msgs::Plane _val;
        	copy_from_arr_shape_msgs_Plane_var_arr(_val,_planesarr);
        	val.planes.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'planes' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'planes' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.plane_poses
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectplane_poses_arr = arr[0]["plane_poses"];
        for (auto _plane_posesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectplane_poses_arr) {
        	geometry_msgs::Pose _val;
        	copy_from_arr_geometry_msgs_Pose_var_arr(_val,_plane_posesarr);
        	val.plane_poses.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'plane_poses' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'plane_poses' is wrong type; expected a struct.");
    }
    // _moveit_msgs_CollisionObject.ADD
    // _moveit_msgs_CollisionObject.REMOVE
    // _moveit_msgs_CollisionObject.APPEND
    // _moveit_msgs_CollisionObject.MOVE
    // _moveit_msgs_CollisionObject.operation
    try {
        const matlab::data::TypedArray<int8_t> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoperation_arr = arr[0]["operation"];
        val.operation = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoperation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'operation' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'operation' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_moveit_msgs_CollisionObject(MDFactory_T& factory, const moveit_msgs::AttachedCollisionObject::_object_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray = factory.createStructArray({1,1},{"header","id","type","primitives","primitive_poses","meshes","mesh_poses","planes","plane_poses","ADD","REMOVE","APPEND","MOVE","operation"});
    // _moveit_msgs_CollisionObject.header
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _moveit_msgs_CollisionObject.id
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["id"] = factory.createCharArray(val.id);
    // _moveit_msgs_CollisionObject.type
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["type"] = get_arr_object_recognition_msgs_ObjectType(factory, val.type);
    // _moveit_msgs_CollisionObject.primitives
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["primitives"] = get_arr_shape_msgs_SolidPrimitive_var_arr(factory, val.primitives);
    // _moveit_msgs_CollisionObject.primitive_poses
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["primitive_poses"] = get_arr_geometry_msgs_Pose_var_arr(factory, val.primitive_poses);
    // _moveit_msgs_CollisionObject.meshes
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["meshes"] = get_arr_shape_msgs_Mesh_var_arr(factory, val.meshes);
    // _moveit_msgs_CollisionObject.mesh_poses
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["mesh_poses"] = get_arr_geometry_msgs_Pose_var_arr(factory, val.mesh_poses);
    // _moveit_msgs_CollisionObject.planes
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["planes"] = get_arr_shape_msgs_Plane_var_arr(factory, val.planes);
    // _moveit_msgs_CollisionObject.plane_poses
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["plane_poses"] = get_arr_geometry_msgs_Pose_var_arr(factory, val.plane_poses);
    // _moveit_msgs_CollisionObject.ADD
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["ADD"] = factory.createScalar(static_cast<int8_t>(val.ADD));
    // _moveit_msgs_CollisionObject.REMOVE
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["REMOVE"] = factory.createScalar(static_cast<int8_t>(val.REMOVE));
    // _moveit_msgs_CollisionObject.APPEND
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["APPEND"] = factory.createScalar(static_cast<int8_t>(val.APPEND));
    // _moveit_msgs_CollisionObject.MOVE
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["MOVE"] = factory.createScalar(static_cast<int8_t>(val.MOVE));
    // _moveit_msgs_CollisionObject.operation
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray[0]["operation"] = factory.createScalar(val.operation);
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_objectoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_object_recognition_msgs_ObjectType(object_recognition_msgs::ObjectType& val, const matlab::data::StructArray& arr) {
    // _object_recognition_msgs_ObjectType.key
    try {
        const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typekey_arr = arr[0]["key"];
        val.key = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typekey_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'key' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'key' is wrong type; expected a string.");
    }
    // _object_recognition_msgs_ObjectType.db
    try {
        const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typedb_arr = arr[0]["db"];
        val.db = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typedb_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'db' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'db' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_object_recognition_msgs_ObjectType(MDFactory_T& factory, const moveit_msgs::CollisionObject::_type_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typeoutArray = factory.createStructArray({1,1},{"key","db"});
    // _object_recognition_msgs_ObjectType.key
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typeoutArray[0]["key"] = factory.createCharArray(val.key);
    // _object_recognition_msgs_ObjectType.db
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typeoutArray[0]["db"] = factory.createCharArray(val.db);
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_typeoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_shape_msgs_SolidPrimitive_var_arr(shape_msgs::SolidPrimitive& val, const matlab::data::Struct& arr) {
    // _shape_msgs_SolidPrimitive_var_arr.BOX
    // _shape_msgs_SolidPrimitive_var_arr.SPHERE
    // _shape_msgs_SolidPrimitive_var_arr.CYLINDER
    // _shape_msgs_SolidPrimitive_var_arr.CONE
    // _shape_msgs_SolidPrimitive_var_arr.type
    try {
        const matlab::data::TypedArray<uint8_t> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivestype_arr = arr["type"];
        val.type = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivestype_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    // _shape_msgs_SolidPrimitive_var_arr.dimensions
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesdimensions_arr = arr["dimensions"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesdimensions_arr.getNumberOfElements();
        	val.dimensions.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesdimensions_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesdimensions_arr.begin()+nelem, val.dimensions.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dimensions' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dimensions' is wrong type; expected a double.");
    }
    // _shape_msgs_SolidPrimitive_var_arr.BOX_X
    // _shape_msgs_SolidPrimitive_var_arr.BOX_Y
    // _shape_msgs_SolidPrimitive_var_arr.BOX_Z
    // _shape_msgs_SolidPrimitive_var_arr.SPHERE_RADIUS
    // _shape_msgs_SolidPrimitive_var_arr.CYLINDER_HEIGHT
    // _shape_msgs_SolidPrimitive_var_arr.CYLINDER_RADIUS
    // _shape_msgs_SolidPrimitive_var_arr.CONE_HEIGHT
    // _shape_msgs_SolidPrimitive_var_arr.CONE_RADIUS
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_shape_msgs_SolidPrimitive_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_primitives_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray = factory.createStructArray({1,val.size()},{"BOX","SPHERE","CYLINDER","CONE","type","dimensions","BOX_X","BOX_Y","BOX_Z","SPHERE_RADIUS","CYLINDER_HEIGHT","CYLINDER_RADIUS","CONE_HEIGHT","CONE_RADIUS"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _shape_msgs_SolidPrimitive_var_arr.BOX
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["BOX"] = factory.createScalar(static_cast<uint8_t>(val[idx].BOX));
    // _shape_msgs_SolidPrimitive_var_arr.SPHERE
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["SPHERE"] = factory.createScalar(static_cast<uint8_t>(val[idx].SPHERE));
    // _shape_msgs_SolidPrimitive_var_arr.CYLINDER
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["CYLINDER"] = factory.createScalar(static_cast<uint8_t>(val[idx].CYLINDER));
    // _shape_msgs_SolidPrimitive_var_arr.CONE
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["CONE"] = factory.createScalar(static_cast<uint8_t>(val[idx].CONE));
    // _shape_msgs_SolidPrimitive_var_arr.type
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["type"] = factory.createScalar(val[idx].type);
    // _shape_msgs_SolidPrimitive_var_arr.dimensions
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["dimensions"] = factory.createArray<shape_msgs::SolidPrimitive::_dimensions_type::const_iterator, double>({1, val[idx].dimensions.size()}, val[idx].dimensions.begin(), val[idx].dimensions.end());
    // _shape_msgs_SolidPrimitive_var_arr.BOX_X
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["BOX_X"] = factory.createScalar(static_cast<uint8_t>(val[idx].BOX_X));
    // _shape_msgs_SolidPrimitive_var_arr.BOX_Y
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["BOX_Y"] = factory.createScalar(static_cast<uint8_t>(val[idx].BOX_Y));
    // _shape_msgs_SolidPrimitive_var_arr.BOX_Z
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["BOX_Z"] = factory.createScalar(static_cast<uint8_t>(val[idx].BOX_Z));
    // _shape_msgs_SolidPrimitive_var_arr.SPHERE_RADIUS
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["SPHERE_RADIUS"] = factory.createScalar(static_cast<uint8_t>(val[idx].SPHERE_RADIUS));
    // _shape_msgs_SolidPrimitive_var_arr.CYLINDER_HEIGHT
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["CYLINDER_HEIGHT"] = factory.createScalar(static_cast<uint8_t>(val[idx].CYLINDER_HEIGHT));
    // _shape_msgs_SolidPrimitive_var_arr.CYLINDER_RADIUS
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["CYLINDER_RADIUS"] = factory.createScalar(static_cast<uint8_t>(val[idx].CYLINDER_RADIUS));
    // _shape_msgs_SolidPrimitive_var_arr.CONE_HEIGHT
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["CONE_HEIGHT"] = factory.createScalar(static_cast<uint8_t>(val[idx].CONE_HEIGHT));
    // _shape_msgs_SolidPrimitive_var_arr.CONE_RADIUS
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray[idx]["CONE_RADIUS"] = factory.createScalar(static_cast<uint8_t>(val[idx].CONE_RADIUS));
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitivesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Pose_var_arr(geometry_msgs::Pose& val, const matlab::data::Struct& arr) {
    // _geometry_msgs_Pose_var_arr.position
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesposition_arr = arr["position"];
        copy_from_arr_geometry_msgs_Point(val.position,_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesposition_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    // _geometry_msgs_Pose_var_arr.orientation
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesorientation_arr = arr["orientation"];
        copy_from_arr_geometry_msgs_Quaternion(val.orientation,_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesorientation_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'orientation' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Pose_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_primitive_poses_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesoutArray = factory.createStructArray({1,val.size()},{"position","orientation"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _geometry_msgs_Pose_var_arr.position
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesoutArray[idx]["position"] = get_arr_geometry_msgs_Point(factory, val[idx].position);
    // _geometry_msgs_Pose_var_arr.orientation
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesoutArray[idx]["orientation"] = get_arr_geometry_msgs_Quaternion(factory, val[idx].orientation);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_posesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point(geometry_msgs::Point& val, const matlab::data::StructArray& arr) {
    // _geometry_msgs_Point.x
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionx_arr = arr[0]["x"];
        val.x = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.y
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positiony_arr = arr[0]["y"];
        val.y = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positiony_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point.z
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionz_arr = arr[0]["z"];
        val.z = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point(MDFactory_T& factory, const geometry_msgs::Pose::_position_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionoutArray = factory.createStructArray({1,1},{"x","y","z"});
    // _geometry_msgs_Point.x
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionoutArray[0]["x"] = factory.createScalar(val.x);
    // _geometry_msgs_Point.y
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionoutArray[0]["y"] = factory.createScalar(val.y);
    // _geometry_msgs_Point.z
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionoutArray[0]["z"] = factory.createScalar(val.z);
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_primitive_poses_positionoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_shape_msgs_Mesh_var_arr(shape_msgs::Mesh& val, const matlab::data::Struct& arr) {
    // _shape_msgs_Mesh_var_arr.triangles
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshestriangles_arr = arr["triangles"];
        for (auto _trianglesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshestriangles_arr) {
        	shape_msgs::MeshTriangle _val;
        	copy_from_arr_shape_msgs_MeshTriangle_var_arr(_val,_trianglesarr);
        	val.triangles.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'triangles' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'triangles' is wrong type; expected a struct.");
    }
    // _shape_msgs_Mesh_var_arr.vertices
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshesvertices_arr = arr["vertices"];
        for (auto _verticesarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshesvertices_arr) {
        	geometry_msgs::Point _val;
        	copy_from_arr_geometry_msgs_Point_var_arr(_val,_verticesarr);
        	val.vertices.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vertices' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vertices' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_shape_msgs_Mesh_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_meshes_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshesoutArray = factory.createStructArray({1,val.size()},{"triangles","vertices"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _shape_msgs_Mesh_var_arr.triangles
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshesoutArray[idx]["triangles"] = get_arr_shape_msgs_MeshTriangle_var_arr(factory, val[idx].triangles);
    // _shape_msgs_Mesh_var_arr.vertices
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshesoutArray[idx]["vertices"] = get_arr_geometry_msgs_Point_var_arr(factory, val[idx].vertices);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_shape_msgs_MeshTriangle_var_arr(shape_msgs::MeshTriangle& val, const matlab::data::Struct& arr) {
    // _shape_msgs_MeshTriangle_var_arr.vertex_indices
    try {
        const matlab::data::TypedArray<uint32_t> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_trianglesvertex_indices_arr = arr["vertex_indices"];
        size_t nelem = 3;
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_trianglesvertex_indices_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_trianglesvertex_indices_arr.begin()+nelem, val.vertex_indices.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vertex_indices' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'vertex_indices' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_shape_msgs_MeshTriangle_var_arr(MDFactory_T& factory, const shape_msgs::Mesh::_triangles_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_trianglesoutArray = factory.createStructArray({1,val.size()},{"vertex_indices"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _shape_msgs_MeshTriangle_var_arr.vertex_indices
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_trianglesoutArray[idx]["vertex_indices"] = factory.createArray<shape_msgs::MeshTriangle::_vertex_indices_type::const_iterator, uint32_t>({1, val[idx].vertex_indices.size()}, val[idx].vertex_indices.begin(), val[idx].vertex_indices.end());
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_trianglesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_geometry_msgs_Point_var_arr(geometry_msgs::Point& val, const matlab::data::Struct& arr) {
    // _geometry_msgs_Point_var_arr.x
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesx_arr = arr["x"];
        val.x = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesx_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point_var_arr.y
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesy_arr = arr["y"];
        val.y = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesy_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a double.");
    }
    // _geometry_msgs_Point_var_arr.z
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesz_arr = arr["z"];
        val.z = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesz_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'z' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'z' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_geometry_msgs_Point_var_arr(MDFactory_T& factory, const shape_msgs::Mesh::_vertices_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesoutArray = factory.createStructArray({1,val.size()},{"x","y","z"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _geometry_msgs_Point_var_arr.x
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesoutArray[idx]["x"] = factory.createScalar(val[idx].x);
    // _geometry_msgs_Point_var_arr.y
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesoutArray[idx]["y"] = factory.createScalar(val[idx].y);
    // _geometry_msgs_Point_var_arr.z
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesoutArray[idx]["z"] = factory.createScalar(val[idx].z);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_meshes_verticesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_shape_msgs_Plane_var_arr(shape_msgs::Plane& val, const matlab::data::Struct& arr) {
    // _shape_msgs_Plane_var_arr.coef
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_planescoef_arr = arr["coef"];
        size_t nelem = 4;
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_planescoef_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_planescoef_arr.begin()+nelem, val.coef.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'coef' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'coef' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_shape_msgs_Plane_var_arr(MDFactory_T& factory, const moveit_msgs::CollisionObject::_planes_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_planesoutArray = factory.createStructArray({1,val.size()},{"coef"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _shape_msgs_Plane_var_arr.coef
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_planesoutArray[idx]["coef"] = factory.createArray<shape_msgs::Plane::_coef_type::const_iterator, double>({1, val[idx].coef.size()}, val[idx].coef.begin(), val[idx].coef.end());
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_object_planesoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_trajectory_msgs_JointTrajectory(trajectory_msgs::JointTrajectory& val, const matlab::data::StructArray& arr) {
    // _trajectory_msgs_JointTrajectory.header
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _trajectory_msgs_JointTrajectory.joint_names
    try {
        const matlab::data::CellArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_names_cellarr = arr[0]["joint_names"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_names_arr = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_names_cellarr[idx];
        	val.joint_names.push_back(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_names' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joint_names' is wrong type; expected a string.");
    }
    // _trajectory_msgs_JointTrajectory.points
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturepoints_arr = arr[0]["points"];
        for (auto _pointsarr : _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturepoints_arr) {
        	trajectory_msgs::JointTrajectoryPoint _val;
        	copy_from_arr_trajectory_msgs_JointTrajectoryPoint_var_arr(_val,_pointsarr);
        	val.points.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'points' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'points' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_trajectory_msgs_JointTrajectory(MDFactory_T& factory, const moveit_msgs::AttachedCollisionObject::_detach_posture_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureoutArray = factory.createStructArray({1,1},{"header","joint_names","points"});
    // _trajectory_msgs_JointTrajectory.header
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureoutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _trajectory_msgs_JointTrajectory.joint_names
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_namesoutCell = factory.createCellArray({1,val.joint_names.size()});
    for(size_t idxin = 0; idxin < val.joint_names.size(); ++ idxin){
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_namesoutCell[idxin] = factory.createCharArray(val.joint_names[idxin]);
    }
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureoutArray[0]["joint_names"] = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posturejoint_namesoutCell;
    // _trajectory_msgs_JointTrajectory.points
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureoutArray[0]["points"] = get_arr_trajectory_msgs_JointTrajectoryPoint_var_arr(factory, val.points);
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_postureoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_trajectory_msgs_JointTrajectoryPoint_var_arr(trajectory_msgs::JointTrajectoryPoint& val, const matlab::data::Struct& arr) {
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.positions
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointspositions_arr = arr["positions"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointspositions_arr.getNumberOfElements();
        	val.positions.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointspositions_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointspositions_arr.begin()+nelem, val.positions.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'positions' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'positions' is wrong type; expected a double.");
    }
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.velocities
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsvelocities_arr = arr["velocities"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsvelocities_arr.getNumberOfElements();
        	val.velocities.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsvelocities_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsvelocities_arr.begin()+nelem, val.velocities.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocities' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocities' is wrong type; expected a double.");
    }
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.accelerations
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsaccelerations_arr = arr["accelerations"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsaccelerations_arr.getNumberOfElements();
        	val.accelerations.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsaccelerations_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsaccelerations_arr.begin()+nelem, val.accelerations.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accelerations' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'accelerations' is wrong type; expected a double.");
    }
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.effort
    try {
        const matlab::data::TypedArray<double> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointseffort_arr = arr["effort"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointseffort_arr.getNumberOfElements();
        	val.effort.resize(nelem);
        	std::copy(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointseffort_arr.begin(), _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointseffort_arr.begin()+nelem, val.effort.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'effort' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'effort' is wrong type; expected a double.");
    }
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.time_from_start
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointstime_from_start_arr = arr["time_from_start"];
        copy_from_arr_ros_Duration(val.time_from_start,_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointstime_from_start_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_from_start' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'time_from_start' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_trajectory_msgs_JointTrajectoryPoint_var_arr(MDFactory_T& factory, const trajectory_msgs::JointTrajectory::_points_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray = factory.createStructArray({1,val.size()},{"positions","velocities","accelerations","effort","time_from_start"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.positions
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray[idx]["positions"] = factory.createArray<trajectory_msgs::JointTrajectoryPoint::_positions_type::const_iterator, double>({1, val[idx].positions.size()}, val[idx].positions.begin(), val[idx].positions.end());
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.velocities
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray[idx]["velocities"] = factory.createArray<trajectory_msgs::JointTrajectoryPoint::_velocities_type::const_iterator, double>({1, val[idx].velocities.size()}, val[idx].velocities.begin(), val[idx].velocities.end());
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.accelerations
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray[idx]["accelerations"] = factory.createArray<trajectory_msgs::JointTrajectoryPoint::_accelerations_type::const_iterator, double>({1, val[idx].accelerations.size()}, val[idx].accelerations.begin(), val[idx].accelerations.end());
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.effort
    	_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray[idx]["effort"] = factory.createArray<trajectory_msgs::JointTrajectoryPoint::_effort_type::const_iterator, double>({1, val[idx].effort.size()}, val[idx].effort.begin(), val[idx].effort.end());
    // _trajectory_msgs_JointTrajectoryPoint_var_arr.time_from_start
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray[idx]["time_from_start"] = get_arr_ros_Duration(factory, val[idx].time_from_start);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_pointsoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_ros_Duration(ros::Duration& val, const matlab::data::StructArray& arr) {
    // _ros_Duration.sec
    try {
        const matlab::data::TypedArray<int32_t> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startsec_arr = arr[0]["sec"];
        val.sec = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'sec' is wrong type; expected a int32.");
    }
    // _ros_Duration.nsec
    try {
        const matlab::data::TypedArray<int32_t> _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startnsec_arr = arr[0]["nsec"];
        val.nsec = _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startnsec_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'nsec' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'nsec' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_ros_Duration(MDFactory_T& factory, const trajectory_msgs::JointTrajectoryPoint::_time_from_start_type& val) {
    auto _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startoutArray = factory.createStructArray({1,1},{"sec","nsec"});
    // _ros_Duration.sec
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startoutArray[0]["sec"] = factory.createScalar(val.sec);
    // _ros_Duration.nsec
    _trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startoutArray[0]["nsec"] = factory.createScalar(val.nsec);
    return std::move(_trajectory_trajectory_plan_trajectory_start_attached_collision_objects_detach_posture_points_time_from_startoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_moveit_msgs_RobotTrajectory(moveit_msgs::RobotTrajectory& val, const matlab::data::StructArray& arr) {
    // _moveit_msgs_RobotTrajectory.joint_trajectory
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectoryjoint_trajectory_arr = arr[0]["joint_trajectory"];
        copy_from_arr_trajectory_msgs_JointTrajectory(val.joint_trajectory,_trajectory_trajectory_plan_trajectoryjoint_trajectory_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_trajectory' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joint_trajectory' is wrong type; expected a struct.");
    }
    // _moveit_msgs_RobotTrajectory.multi_dof_joint_trajectory
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectorymulti_dof_joint_trajectory_arr = arr[0]["multi_dof_joint_trajectory"];
        copy_from_arr_trajectory_msgs_MultiDOFJointTrajectory(val.multi_dof_joint_trajectory,_trajectory_trajectory_plan_trajectorymulti_dof_joint_trajectory_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'multi_dof_joint_trajectory' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'multi_dof_joint_trajectory' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_moveit_msgs_RobotTrajectory(MDFactory_T& factory, const niryo_one_msgs::TrajectoryPlan::_trajectory_type& val) {
    auto _trajectory_trajectory_plan_trajectoryoutArray = factory.createStructArray({1,1},{"joint_trajectory","multi_dof_joint_trajectory"});
    // _moveit_msgs_RobotTrajectory.joint_trajectory
    _trajectory_trajectory_plan_trajectoryoutArray[0]["joint_trajectory"] = get_arr_trajectory_msgs_JointTrajectory(factory, val.joint_trajectory);
    // _moveit_msgs_RobotTrajectory.multi_dof_joint_trajectory
    _trajectory_trajectory_plan_trajectoryoutArray[0]["multi_dof_joint_trajectory"] = get_arr_trajectory_msgs_MultiDOFJointTrajectory(factory, val.multi_dof_joint_trajectory);
    return std::move(_trajectory_trajectory_plan_trajectoryoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_trajectory_msgs_MultiDOFJointTrajectory(trajectory_msgs::MultiDOFJointTrajectory& val, const matlab::data::StructArray& arr) {
    // _trajectory_msgs_MultiDOFJointTrajectory.header
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryheader_arr = arr[0]["header"];
        copy_from_arr_std_msgs_Header(val.header,_trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryheader_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    // _trajectory_msgs_MultiDOFJointTrajectory.joint_names
    try {
        const matlab::data::CellArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_names_cellarr = arr[0]["joint_names"];
        size_t nelem = _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_names_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_names_arr = _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_names_cellarr[idx];
        	val.joint_names.push_back(_trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_names_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'joint_names' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'joint_names' is wrong type; expected a string.");
    }
    // _trajectory_msgs_MultiDOFJointTrajectory.points
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectorypoints_arr = arr[0]["points"];
        for (auto _pointsarr : _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectorypoints_arr) {
        	trajectory_msgs::MultiDOFJointTrajectoryPoint _val;
        	copy_from_arr_trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr(_val,_pointsarr);
        	val.points.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'points' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'points' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_trajectory_msgs_MultiDOFJointTrajectory(MDFactory_T& factory, const moveit_msgs::RobotTrajectory::_multi_dof_joint_trajectory_type& val) {
    auto _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryoutArray = factory.createStructArray({1,1},{"header","joint_names","points"});
    // _trajectory_msgs_MultiDOFJointTrajectory.header
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryoutArray[0]["header"] = get_arr_std_msgs_Header(factory, val.header);
    // _trajectory_msgs_MultiDOFJointTrajectory.joint_names
    auto _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_namesoutCell = factory.createCellArray({1,val.joint_names.size()});
    for(size_t idxin = 0; idxin < val.joint_names.size(); ++ idxin){
    	_trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_namesoutCell[idxin] = factory.createCharArray(val.joint_names[idxin]);
    }
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryoutArray[0]["joint_names"] = _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryjoint_namesoutCell;
    // _trajectory_msgs_MultiDOFJointTrajectory.points
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryoutArray[0]["points"] = get_arr_trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr(factory, val.points);
    return std::move(_trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectoryoutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr(trajectory_msgs::MultiDOFJointTrajectoryPoint& val, const matlab::data::Struct& arr) {
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.transforms
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointstransforms_arr = arr["transforms"];
        for (auto _transformsarr : _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointstransforms_arr) {
        	geometry_msgs::Transform _val;
        	copy_from_arr_geometry_msgs_Transform_var_arr(_val,_transformsarr);
        	val.transforms.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'transforms' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'transforms' is wrong type; expected a struct.");
    }
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.velocities
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsvelocities_arr = arr["velocities"];
        for (auto _velocitiesarr : _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsvelocities_arr) {
        	geometry_msgs::Twist _val;
        	copy_from_arr_geometry_msgs_Twist_var_arr(_val,_velocitiesarr);
        	val.velocities.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'velocities' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'velocities' is wrong type; expected a struct.");
    }
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.accelerations
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsaccelerations_arr = arr["accelerations"];
        for (auto _accelerationsarr : _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsaccelerations_arr) {
        	geometry_msgs::Twist _val;
        	copy_from_arr_geometry_msgs_Twist_var_arr(_val,_accelerationsarr);
        	val.accelerations.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accelerations' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'accelerations' is wrong type; expected a struct.");
    }
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.time_from_start
    try {
        const matlab::data::StructArray _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointstime_from_start_arr = arr["time_from_start"];
        copy_from_arr_ros_Duration(val.time_from_start,_trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointstime_from_start_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'time_from_start' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'time_from_start' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr(MDFactory_T& factory, const trajectory_msgs::MultiDOFJointTrajectory::_points_type& val) {
    auto _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsoutArray = factory.createStructArray({1,val.size()},{"transforms","velocities","accelerations","time_from_start"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.transforms
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsoutArray[idx]["transforms"] = get_arr_geometry_msgs_Transform_var_arr(factory, val[idx].transforms);
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.velocities
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsoutArray[idx]["velocities"] = get_arr_geometry_msgs_Twist_var_arr(factory, val[idx].velocities);
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.accelerations
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsoutArray[idx]["accelerations"] = get_arr_geometry_msgs_Twist_var_arr(factory, val[idx].accelerations);
    // _trajectory_msgs_MultiDOFJointTrajectoryPoint_var_arr.time_from_start
    _trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsoutArray[idx]["time_from_start"] = get_arr_ros_Duration(factory, val[idx].time_from_start);
    }
    return std::move(_trajectory_trajectory_plan_trajectory_multi_dof_joint_trajectory_pointsoutArray);
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT void copy_from_arr(niryo_one_msgs::ManageTrajectory::Response& msg, const matlab::data::StructArray arr) {
    try {
        //status
        const matlab::data::TypedArray<int32_t> status_arr = arr[0]["status"];
        msg.status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a int32.");
    }
    try {
        //message
        const matlab::data::CharArray message_arr = arr[0]["message"];
        msg.message = message_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'message' is wrong type; expected a string.");
    }
    try {
        //trajectory
        const matlab::data::StructArray trajectory_arr = arr[0]["trajectory"];
        copy_from_arr_niryo_one_msgs_Trajectory(msg.trajectory,trajectory_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'trajectory' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'trajectory' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  NIRYO_ONE_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const niryo_one_msgs::ManageTrajectory::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"status","message","trajectory"});
    // status
    outArray[0]["status"] = factory.createScalar(msg.status);
    // message
    outArray[0]["message"] = factory.createCharArray(msg.message);
    // trajectory
    outArray[0]["trajectory"] = get_arr_niryo_one_msgs_Trajectory(factory, msg.trajectory);
    return std::move(outArray);
  }
} //namespace ManageTrajectory_Response
} //namespace matlabhelper
} //namespace niryo_one_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1