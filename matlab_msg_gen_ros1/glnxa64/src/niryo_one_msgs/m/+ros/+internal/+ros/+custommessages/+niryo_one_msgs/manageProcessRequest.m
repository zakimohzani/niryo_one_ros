function [data, info] = manageProcessRequest
%ManageProcess gives an empty data for niryo_one_msgs/ManageProcessRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.action, info.action] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'niryo_one_msgs/ManageProcessRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'action';
info.MatPath{2} = 'name';
