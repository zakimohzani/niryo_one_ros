function [data, info] = objectPose
%ObjectPose gives an empty data for niryo_one_msgs/ObjectPose
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.x, info.x] = ros.internal.ros.messages.ros.default_type('double',1);
[data.y, info.y] = ros.internal.ros.messages.ros.default_type('double',1);
[data.z, info.z] = ros.internal.ros.messages.ros.default_type('double',1);
[data.roll, info.roll] = ros.internal.ros.messages.ros.default_type('double',1);
[data.pitch, info.pitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.yaw, info.yaw] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'niryo_one_msgs/ObjectPose';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'x';
info.MatPath{2} = 'y';
info.MatPath{3} = 'z';
info.MatPath{4} = 'roll';
info.MatPath{5} = 'pitch';
info.MatPath{6} = 'yaw';
