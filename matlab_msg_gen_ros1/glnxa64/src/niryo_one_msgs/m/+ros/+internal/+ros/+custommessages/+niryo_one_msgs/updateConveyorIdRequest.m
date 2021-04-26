function [data, info] = updateConveyorIdRequest
%UpdateConveyorId gives an empty data for niryo_one_msgs/UpdateConveyorIdRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.old_id, info.old_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.new_id, info.new_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'niryo_one_msgs/UpdateConveyorIdRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'old_id';
info.MatPath{2} = 'new_id';
