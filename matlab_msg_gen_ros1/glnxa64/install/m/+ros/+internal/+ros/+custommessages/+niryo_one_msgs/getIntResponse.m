function [data, info] = getIntResponse
%GetInt gives an empty data for niryo_one_msgs/GetIntResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.value, info.value] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'niryo_one_msgs/GetIntResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'value';
