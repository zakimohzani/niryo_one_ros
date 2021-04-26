function [data, info] = sequence
%Sequence gives an empty data for niryo_one_msgs/Sequence
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
[data.description, info.description] = ros.internal.ros.messages.ros.char('string',0);
[data.created, info.created] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.updated, info.updated] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.blockly_xml, info.blockly_xml] = ros.internal.ros.messages.ros.char('string',0);
[data.python_code, info.python_code] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'niryo_one_msgs/Sequence';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'id';
info.MatPath{2} = 'name';
info.MatPath{3} = 'description';
info.MatPath{4} = 'created';
info.MatPath{5} = 'updated';
info.MatPath{6} = 'blockly_xml';
info.MatPath{7} = 'python_code';
