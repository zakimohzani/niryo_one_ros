function [data, info] = robotState
%RobotState gives an empty data for niryo_one_msgs/RobotState
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.position, info.position] = ros.internal.ros.messages.geometry_msgs.point;
info.position.MLdataType = 'struct';
[data.rpy, info.rpy] = ros.internal.ros.custommessages.niryo_one_msgs.rPY;
info.rpy.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/RobotState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'position';
info.MatPath{2} = 'position.x';
info.MatPath{3} = 'position.y';
info.MatPath{4} = 'position.z';
info.MatPath{5} = 'rpy';
info.MatPath{6} = 'rpy.roll';
info.MatPath{7} = 'rpy.pitch';
info.MatPath{8} = 'rpy.yaw';
