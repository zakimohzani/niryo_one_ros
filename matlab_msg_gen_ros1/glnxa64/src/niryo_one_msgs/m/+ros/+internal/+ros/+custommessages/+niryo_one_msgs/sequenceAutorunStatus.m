function [data, info] = sequenceAutorunStatus
%SequenceAutorunStatus gives an empty data for niryo_one_msgs/SequenceAutorunStatus
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.enabled, info.enabled] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.mode, info.mode] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.sequence_ids, info.sequence_ids] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'niryo_one_msgs/SequenceAutorunStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'enabled';
info.MatPath{2} = 'mode';
info.MatPath{3} = 'sequence_ids';
