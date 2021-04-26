function [data, info] = processState
%ProcessState gives an empty data for niryo_one_msgs/ProcessState
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',NaN);
[data.is_active, info.is_active] = ros.internal.ros.messages.ros.default_type('logical',NaN);
info.MessageType = 'niryo_one_msgs/ProcessState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'name';
info.MatPath{2} = 'is_active';
