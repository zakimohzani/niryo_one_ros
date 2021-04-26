function [data, info] = closeGripperRequest
%CloseGripper gives an empty data for niryo_one_msgs/CloseGripperRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.close_position, info.close_position] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.close_speed, info.close_speed] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.close_hold_torque, info.close_hold_torque] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.close_max_torque, info.close_max_torque] = ros.internal.ros.messages.ros.default_type('int16',1);
info.MessageType = 'niryo_one_msgs/CloseGripperRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'id';
info.MatPath{2} = 'close_position';
info.MatPath{3} = 'close_speed';
info.MatPath{4} = 'close_hold_torque';
info.MatPath{5} = 'close_max_torque';
