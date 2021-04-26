function [data, info] = getCalibrationCamRequest
%GetCalibrationCam gives an empty data for niryo_one_msgs/GetCalibrationCamRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.empty, info.empty] = ros.internal.ros.messages.std_msgs.empty;
info.empty.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/GetCalibrationCamRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'empty';
