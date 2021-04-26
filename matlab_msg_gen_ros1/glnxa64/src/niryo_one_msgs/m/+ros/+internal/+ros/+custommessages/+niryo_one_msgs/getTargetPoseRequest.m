function [data, info] = getTargetPoseRequest
%GetTargetPose gives an empty data for niryo_one_msgs/GetTargetPoseRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.GRIP_AUTO, info.GRIP_AUTO] = ros.internal.ros.messages.ros.char('string',0);
[data.GRIP_AUTO, info.GRIP_AUTO] = ros.internal.ros.messages.ros.char('string',1,'auto');
[data.workspace, info.workspace] = ros.internal.ros.messages.ros.char('string',0);
[data.grip, info.grip] = ros.internal.ros.messages.ros.char('string',0);
[data.tool_id, info.tool_id] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.height_offset, info.height_offset] = ros.internal.ros.messages.ros.default_type('single',1);
[data.x_rel, info.x_rel] = ros.internal.ros.messages.ros.default_type('single',1);
[data.y_rel, info.y_rel] = ros.internal.ros.messages.ros.default_type('single',1);
[data.yaw_rel, info.yaw_rel] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'niryo_one_msgs/GetTargetPoseRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'GRIP_AUTO';
info.MatPath{2} = 'workspace';
info.MatPath{3} = 'grip';
info.MatPath{4} = 'tool_id';
info.MatPath{5} = 'height_offset';
info.MatPath{6} = 'x_rel';
info.MatPath{7} = 'y_rel';
info.MatPath{8} = 'yaw_rel';
