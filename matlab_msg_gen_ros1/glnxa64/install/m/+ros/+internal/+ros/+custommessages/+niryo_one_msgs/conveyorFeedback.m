function [data, info] = conveyorFeedback
%ConveyorFeedback gives an empty data for niryo_one_msgs/ConveyorFeedback
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.conveyor_id, info.conveyor_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.connection_state, info.connection_state] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.running, info.running] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.speed, info.speed] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.direction, info.direction] = ros.internal.ros.messages.ros.default_type('int8',1);
info.MessageType = 'niryo_one_msgs/ConveyorFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'conveyor_id';
info.MatPath{2} = 'connection_state';
info.MatPath{3} = 'running';
info.MatPath{4} = 'speed';
info.MatPath{5} = 'direction';
