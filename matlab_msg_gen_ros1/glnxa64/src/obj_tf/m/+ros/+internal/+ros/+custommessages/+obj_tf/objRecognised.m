function [data, info] = objRecognised
%ObjRecognised gives an empty data for obj_tf/ObjRecognised
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.detectedTime, info.detectedTime] = ros.internal.ros.messages.ros.time;
info.detectedTime.MLdataType = 'struct';
[data.x, info.x] = ros.internal.ros.messages.ros.default_type('single',1);
[data.y, info.y] = ros.internal.ros.messages.ros.default_type('single',1);
[data.z, info.z] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'obj_tf/ObjRecognised';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'detectedTime';
info.MatPath{2} = 'detectedTime.sec';
info.MatPath{3} = 'detectedTime.nsec';
info.MatPath{4} = 'x';
info.MatPath{5} = 'y';
info.MatPath{6} = 'z';
