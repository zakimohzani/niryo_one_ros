function [data, info] = setConveyorRequest
%SetConveyor gives an empty data for niryo_one_msgs/SetConveyorRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.activate, info.activate] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'niryo_one_msgs/SetConveyorRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'id';
info.MatPath{2} = 'activate';
