function [data, info] = toolCommand
%ToolCommand gives an empty data for niryo_one_msgs/ToolCommand
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.tool_id, info.tool_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.cmd_type, info.cmd_type] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.gripper_close_speed, info.gripper_close_speed] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.gripper_open_speed, info.gripper_open_speed] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.activate, info.activate] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.gpio, info.gpio] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'niryo_one_msgs/ToolCommand';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'tool_id';
info.MatPath{2} = 'cmd_type';
info.MatPath{3} = 'gripper_close_speed';
info.MatPath{4} = 'gripper_open_speed';
info.MatPath{5} = 'activate';
info.MatPath{6} = 'gpio';
