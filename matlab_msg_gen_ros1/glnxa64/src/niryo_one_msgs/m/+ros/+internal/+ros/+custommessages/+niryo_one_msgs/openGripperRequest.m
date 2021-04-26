function [data, info] = openGripperRequest
%OpenGripper gives an empty data for niryo_one_msgs/OpenGripperRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.open_position, info.open_position] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.open_speed, info.open_speed] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.open_hold_torque, info.open_hold_torque] = ros.internal.ros.messages.ros.default_type('int16',1);
info.MessageType = 'niryo_one_msgs/OpenGripperRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'id';
info.MatPath{2} = 'open_position';
info.MatPath{3} = 'open_speed';
info.MatPath{4} = 'open_hold_torque';
