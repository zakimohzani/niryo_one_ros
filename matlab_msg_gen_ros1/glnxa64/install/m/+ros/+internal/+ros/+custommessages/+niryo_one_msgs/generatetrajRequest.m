function [data, info] = generatetrajRequest
%generatetraj gives an empty data for niryo_one_msgs/generatetrajRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.j0, info.j0] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.j1, info.j1] = ros.internal.ros.messages.ros.default_type('double',NaN);
info.MessageType = 'niryo_one_msgs/generatetrajRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'j0';
info.MatPath{2} = 'j1';
