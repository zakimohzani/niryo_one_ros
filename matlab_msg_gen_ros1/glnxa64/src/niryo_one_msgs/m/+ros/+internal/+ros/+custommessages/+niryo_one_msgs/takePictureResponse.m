function [data, info] = takePictureResponse
%TakePicture gives an empty data for niryo_one_msgs/TakePictureResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.success, info.success] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'niryo_one_msgs/TakePictureResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'success';
