function [data, info] = setDigitalIORequest
%SetDigitalIO gives an empty data for niryo_one_msgs/SetDigitalIORequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.pin, info.pin] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.value, info.value] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'niryo_one_msgs/SetDigitalIORequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'pin';
info.MatPath{2} = 'value';
