function [data, info] = shiftPose
%ShiftPose gives an empty data for niryo_one_msgs/ShiftPose
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.axis_number, info.axis_number] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.value, info.value] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'niryo_one_msgs/ShiftPose';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'axis_number';
info.MatPath{2} = 'value';
