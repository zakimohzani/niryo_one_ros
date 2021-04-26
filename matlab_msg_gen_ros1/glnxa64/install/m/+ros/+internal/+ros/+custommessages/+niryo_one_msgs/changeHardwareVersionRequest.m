function [data, info] = changeHardwareVersionRequest
%ChangeHardwareVersion gives an empty data for niryo_one_msgs/ChangeHardwareVersionRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.old_version, info.old_version] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.new_version, info.new_version] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'niryo_one_msgs/ChangeHardwareVersionRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'old_version';
info.MatPath{2} = 'new_version';
