function [data, info] = digitalIOState
%DigitalIOState gives an empty data for niryo_one_msgs/DigitalIOState
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.pins, info.pins] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.names, info.names] = ros.internal.ros.messages.ros.char('string',NaN);
[data.modes, info.modes] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.states, info.states] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'niryo_one_msgs/DigitalIOState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'pins';
info.MatPath{2} = 'names';
info.MatPath{3} = 'modes';
info.MatPath{4} = 'states';
