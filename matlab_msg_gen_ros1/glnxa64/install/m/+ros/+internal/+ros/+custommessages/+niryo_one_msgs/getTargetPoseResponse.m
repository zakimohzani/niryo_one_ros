function [data, info] = getTargetPoseResponse
%GetTargetPose gives an empty data for niryo_one_msgs/GetTargetPoseResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.status, info.status] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.message, info.message] = ros.internal.ros.messages.ros.char('string',0);
[data.target_pose, info.target_pose] = ros.internal.ros.custommessages.niryo_one_msgs.robotState;
info.target_pose.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/GetTargetPoseResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'status';
info.MatPath{2} = 'message';
info.MatPath{3} = 'target_pose';
info.MatPath{4} = 'target_pose.position';
info.MatPath{5} = 'target_pose.position.x';
info.MatPath{6} = 'target_pose.position.y';
info.MatPath{7} = 'target_pose.position.z';
info.MatPath{8} = 'target_pose.rpy';
info.MatPath{9} = 'target_pose.rpy.roll';
info.MatPath{10} = 'target_pose.rpy.pitch';
info.MatPath{11} = 'target_pose.rpy.yaw';
