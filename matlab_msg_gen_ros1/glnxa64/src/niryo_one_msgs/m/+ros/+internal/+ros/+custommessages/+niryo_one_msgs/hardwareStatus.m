function [data, info] = hardwareStatus
%HardwareStatus gives an empty data for niryo_one_msgs/HardwareStatus
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.rpi_temperature, info.rpi_temperature] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.hardware_version, info.hardware_version] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.connection_up, info.connection_up] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.error_message, info.error_message] = ros.internal.ros.messages.ros.char('string',0);
[data.calibration_needed, info.calibration_needed] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.calibration_in_progress, info.calibration_in_progress] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.motor_names, info.motor_names] = ros.internal.ros.messages.ros.char('string',NaN);
[data.motor_types, info.motor_types] = ros.internal.ros.messages.ros.char('string',NaN);
[data.temperatures, info.temperatures] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.voltages, info.voltages] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.hardware_errors, info.hardware_errors] = ros.internal.ros.messages.ros.default_type('int32',NaN);
info.MessageType = 'niryo_one_msgs/HardwareStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'rpi_temperature';
info.MatPath{8} = 'hardware_version';
info.MatPath{9} = 'connection_up';
info.MatPath{10} = 'error_message';
info.MatPath{11} = 'calibration_needed';
info.MatPath{12} = 'calibration_in_progress';
info.MatPath{13} = 'motor_names';
info.MatPath{14} = 'motor_types';
info.MatPath{15} = 'temperatures';
info.MatPath{16} = 'voltages';
info.MatPath{17} = 'hardware_errors';