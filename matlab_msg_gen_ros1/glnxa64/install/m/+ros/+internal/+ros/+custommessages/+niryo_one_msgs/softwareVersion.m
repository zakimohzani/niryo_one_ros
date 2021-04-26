function [data, info] = softwareVersion
%SoftwareVersion gives an empty data for niryo_one_msgs/SoftwareVersion
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.rpi_image_version, info.rpi_image_version] = ros.internal.ros.messages.ros.char('string',0);
[data.ros_niryo_one_version, info.ros_niryo_one_version] = ros.internal.ros.messages.ros.char('string',0);
[data.motor_names, info.motor_names] = ros.internal.ros.messages.ros.char('string',NaN);
[data.stepper_firmware_versions, info.stepper_firmware_versions] = ros.internal.ros.messages.ros.char('string',NaN);
info.MessageType = 'niryo_one_msgs/SoftwareVersion';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'rpi_image_version';
info.MatPath{2} = 'ros_niryo_one_version';
info.MatPath{3} = 'motor_names';
info.MatPath{4} = 'stepper_firmware_versions';
