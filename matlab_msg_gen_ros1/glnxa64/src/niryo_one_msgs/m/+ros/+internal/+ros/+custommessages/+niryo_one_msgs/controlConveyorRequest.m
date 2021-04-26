function [data, info] = controlConveyorRequest
%ControlConveyor gives an empty data for niryo_one_msgs/ControlConveyorRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.control_on, info.control_on] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.speed, info.speed] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.direction, info.direction] = ros.internal.ros.messages.ros.default_type('int8',1);
info.MessageType = 'niryo_one_msgs/ControlConveyorRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'id';
info.MatPath{2} = 'control_on';
info.MatPath{3} = 'speed';
info.MatPath{4} = 'direction';
