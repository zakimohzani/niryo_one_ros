function [data, info] = generatetrajResponse
%generatetraj gives an empty data for niryo_one_msgs/generatetrajResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.positions, info.positions] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.velocities, info.velocities] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.acceleration, info.acceleration] = ros.internal.ros.messages.ros.default_type('double',NaN);
info.MessageType = 'niryo_one_msgs/generatetrajResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'positions';
info.MatPath{2} = 'velocities';
info.MatPath{3} = 'acceleration';
