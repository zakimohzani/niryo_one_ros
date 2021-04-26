function [data, info] = logStatus
%LogStatus gives an empty data for niryo_one_msgs/LogStatus
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.log_size, info.log_size] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.available_disk_size, info.available_disk_size] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.purge_log_on_startup, info.purge_log_on_startup] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'niryo_one_msgs/LogStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'log_size';
info.MatPath{8} = 'available_disk_size';
info.MatPath{9} = 'purge_log_on_startup';
