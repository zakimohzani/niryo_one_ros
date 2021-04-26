function [data, info] = openGripperResponse
%OpenGripper gives an empty data for niryo_one_msgs/OpenGripperResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.state, info.state] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'niryo_one_msgs/OpenGripperResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'state';
