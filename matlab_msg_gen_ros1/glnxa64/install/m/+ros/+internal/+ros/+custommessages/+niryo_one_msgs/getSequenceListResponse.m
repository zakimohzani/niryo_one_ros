function [data, info] = getSequenceListResponse
%GetSequenceList gives an empty data for niryo_one_msgs/GetSequenceListResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.sequences, info.sequences] = ros.internal.ros.custommessages.niryo_one_msgs.sequence;
info.sequences.MLdataType = 'struct';
info.sequences.MaxLen = NaN;
info.sequences.MinLen = 0;
data.sequences = data.sequences([],1);
info.MessageType = 'niryo_one_msgs/GetSequenceListResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'sequences';
info.MatPath{2} = 'sequences.id';
info.MatPath{3} = 'sequences.name';
info.MatPath{4} = 'sequences.description';
info.MatPath{5} = 'sequences.created';
info.MatPath{6} = 'sequences.updated';
info.MatPath{7} = 'sequences.blockly_xml';
info.MatPath{8} = 'sequences.python_code';
