function [data, info] = changeMotorConfigRequest
%ChangeMotorConfig gives an empty data for niryo_one_msgs/ChangeMotorConfigRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.can_required_motor_id_list, info.can_required_motor_id_list] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.dxl_required_motor_id_list, info.dxl_required_motor_id_list] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'niryo_one_msgs/ChangeMotorConfigRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'can_required_motor_id_list';
info.MatPath{2} = 'dxl_required_motor_id_list';
