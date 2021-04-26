function [data, info] = setLedsRequest
%SetLeds gives an empty data for niryo_one_msgs/SetLedsRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.values, info.values] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'niryo_one_msgs/SetLedsRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'values';
