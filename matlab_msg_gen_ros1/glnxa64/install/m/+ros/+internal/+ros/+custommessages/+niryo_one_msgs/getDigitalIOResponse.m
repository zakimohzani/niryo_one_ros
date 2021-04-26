function [data, info] = getDigitalIOResponse
%GetDigitalIO gives an empty data for niryo_one_msgs/GetDigitalIOResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.status, info.status] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.message, info.message] = ros.internal.ros.messages.ros.char('string',0);
[data.pin, info.pin] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
[data.mode, info.mode] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.state, info.state] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'niryo_one_msgs/GetDigitalIOResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'status';
info.MatPath{2} = 'message';
info.MatPath{3} = 'pin';
info.MatPath{4} = 'name';
info.MatPath{5} = 'mode';
info.MatPath{6} = 'state';
