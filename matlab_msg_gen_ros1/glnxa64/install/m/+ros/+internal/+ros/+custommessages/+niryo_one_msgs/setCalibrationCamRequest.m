function [data, info] = setCalibrationCamRequest
%SetCalibrationCam gives an empty data for niryo_one_msgs/SetCalibrationCamRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'niryo_one_msgs/SetCalibrationCamRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'name';
