function [data, info] = controlConveyorResponse
%ControlConveyor gives an empty data for niryo_one_msgs/ControlConveyorResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.status, info.status] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.message, info.message] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'niryo_one_msgs/ControlConveyorResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'status';
info.MatPath{2} = 'message';
