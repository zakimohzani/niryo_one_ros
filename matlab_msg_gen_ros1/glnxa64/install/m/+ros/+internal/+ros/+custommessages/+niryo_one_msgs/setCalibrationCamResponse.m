function [data, info] = setCalibrationCamResponse
%SetCalibrationCam gives an empty data for niryo_one_msgs/SetCalibrationCamResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.status, info.status] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.SUCCESSFULLY_SET, info.SUCCESSFULLY_SET] = ros.internal.ros.messages.ros.default_type('int32',1, 0);
[data.OVERWRITTEN, info.OVERWRITTEN] = ros.internal.ros.messages.ros.default_type('int32',1, 1);
[data.NOT_SET, info.NOT_SET] = ros.internal.ros.messages.ros.default_type('int32',1, -1);
info.MessageType = 'niryo_one_msgs/SetCalibrationCamResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'status';
info.MatPath{2} = 'SUCCESSFULLY_SET';
info.MatPath{3} = 'OVERWRITTEN';
info.MatPath{4} = 'NOT_SET';
