function [data, info] = getSequenceListRequest
%GetSequenceList gives an empty data for niryo_one_msgs/GetSequenceListRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.info_header_only, info.info_header_only] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'niryo_one_msgs/GetSequenceListRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'info_header_only';
