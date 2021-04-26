function [data, info] = objDetectionRequest
%ObjDetection gives an empty data for niryo_one_msgs/ObjDetectionRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.obj_type, info.obj_type] = ros.internal.ros.messages.ros.char('string',0);
[data.obj_color, info.obj_color] = ros.internal.ros.messages.ros.char('string',0);
[data.workspace_ratio, info.workspace_ratio] = ros.internal.ros.messages.ros.default_type('single',1);
[data.ret_image, info.ret_image] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'niryo_one_msgs/ObjDetectionRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'obj_type';
info.MatPath{2} = 'obj_color';
info.MatPath{3} = 'workspace_ratio';
info.MatPath{4} = 'ret_image';
