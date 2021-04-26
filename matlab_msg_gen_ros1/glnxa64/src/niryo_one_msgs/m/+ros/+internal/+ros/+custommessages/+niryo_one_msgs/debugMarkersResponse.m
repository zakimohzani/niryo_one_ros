function [data, info] = debugMarkersResponse
%DebugMarkers gives an empty data for niryo_one_msgs/DebugMarkersResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.markers_detected, info.markers_detected] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.img, info.img] = ros.internal.ros.messages.sensor_msgs.compressedImage;
info.img.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/DebugMarkersResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'markers_detected';
info.MatPath{2} = 'img';
info.MatPath{3} = 'img.header';
info.MatPath{4} = 'img.header.seq';
info.MatPath{5} = 'img.header.stamp';
info.MatPath{6} = 'img.header.stamp.sec';
info.MatPath{7} = 'img.header.stamp.nsec';
info.MatPath{8} = 'img.header.frame_id';
info.MatPath{9} = 'img.format';
info.MatPath{10} = 'img.data';
