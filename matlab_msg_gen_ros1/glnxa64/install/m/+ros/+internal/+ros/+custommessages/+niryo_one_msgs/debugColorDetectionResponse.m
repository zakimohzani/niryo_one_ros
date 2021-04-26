function [data, info] = debugColorDetectionResponse
%DebugColorDetection gives an empty data for niryo_one_msgs/DebugColorDetectionResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.img, info.img] = ros.internal.ros.messages.sensor_msgs.compressedImage;
info.img.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/DebugColorDetectionResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'img';
info.MatPath{2} = 'img.header';
info.MatPath{3} = 'img.header.seq';
info.MatPath{4} = 'img.header.stamp';
info.MatPath{5} = 'img.header.stamp.sec';
info.MatPath{6} = 'img.header.stamp.nsec';
info.MatPath{7} = 'img.header.frame_id';
info.MatPath{8} = 'img.format';
info.MatPath{9} = 'img.data';
