function [data, info] = pullAirVacuumPumpRequest
%PullAirVacuumPump gives an empty data for niryo_one_msgs/PullAirVacuumPumpRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.pull_air_position, info.pull_air_position] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.pull_air_hold_torque, info.pull_air_hold_torque] = ros.internal.ros.messages.ros.default_type('int16',1);
info.MessageType = 'niryo_one_msgs/PullAirVacuumPumpRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'pull_air_position';
info.MatPath{3} = 'pull_air_hold_torque';
