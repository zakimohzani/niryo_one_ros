function [data, info] = sendCustomDxlValueRequest
%SendCustomDxlValue gives an empty data for niryo_one_msgs/SendCustomDxlValueRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.motor_type, info.motor_type] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.value, info.value] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.reg_address, info.reg_address] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.byte_number, info.byte_number] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'niryo_one_msgs/SendCustomDxlValueRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'motor_type';
info.MatPath{2} = 'id';
info.MatPath{3} = 'value';
info.MatPath{4} = 'reg_address';
info.MatPath{5} = 'byte_number';
