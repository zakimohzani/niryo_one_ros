function [data, info] = rPY
%RPY gives an empty data for niryo_one_msgs/RPY
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.roll, info.roll] = ros.internal.ros.messages.ros.default_type('double',1);
[data.pitch, info.pitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.yaw, info.yaw] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'niryo_one_msgs/RPY';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'roll';
info.MatPath{2} = 'pitch';
info.MatPath{3} = 'yaw';
