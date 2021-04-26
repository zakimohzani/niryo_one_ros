function [data, info] = setStringRequest
%SetString gives an empty data for niryo_one_msgs/SetStringRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.value, info.value] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'niryo_one_msgs/SetStringRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'value';
