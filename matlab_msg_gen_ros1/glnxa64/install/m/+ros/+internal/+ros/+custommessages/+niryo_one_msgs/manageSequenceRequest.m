function [data, info] = manageSequenceRequest
%ManageSequence gives an empty data for niryo_one_msgs/ManageSequenceRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.cmd_type, info.cmd_type] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.sequence_id, info.sequence_id] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.sequence, info.sequence] = ros.internal.ros.custommessages.niryo_one_msgs.sequence;
info.sequence.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/ManageSequenceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'cmd_type';
info.MatPath{2} = 'sequence_id';
info.MatPath{3} = 'sequence';
info.MatPath{4} = 'sequence.id';
info.MatPath{5} = 'sequence.name';
info.MatPath{6} = 'sequence.description';
info.MatPath{7} = 'sequence.created';
info.MatPath{8} = 'sequence.updated';
info.MatPath{9} = 'sequence.blockly_xml';
info.MatPath{10} = 'sequence.python_code';
