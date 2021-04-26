function [data, info] = pingDxlToolRequest
%PingDxlTool gives an empty data for niryo_one_msgs/PingDxlToolRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'niryo_one_msgs/PingDxlToolRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'id';
info.MatPath{2} = 'name';
