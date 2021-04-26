function [data, info] = editWorkspaceRequest
%EditWorkspace gives an empty data for niryo_one_msgs/EditWorkspaceRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.CREATE, info.CREATE] = ros.internal.ros.messages.ros.default_type('int32',1, 1);
[data.REMOVE, info.REMOVE] = ros.internal.ros.messages.ros.default_type('int32',1, -1);
[data.cmd, info.cmd] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
[data.pose_origin, info.pose_origin] = ros.internal.ros.custommessages.niryo_one_msgs.robotState;
info.pose_origin.MLdataType = 'struct';
[data.pose_1, info.pose_1] = ros.internal.ros.custommessages.niryo_one_msgs.robotState;
info.pose_1.MLdataType = 'struct';
[data.pose_2, info.pose_2] = ros.internal.ros.custommessages.niryo_one_msgs.robotState;
info.pose_2.MLdataType = 'struct';
[data.pose_3, info.pose_3] = ros.internal.ros.custommessages.niryo_one_msgs.robotState;
info.pose_3.MLdataType = 'struct';
info.MessageType = 'niryo_one_msgs/EditWorkspaceRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,40);
info.MatPath{1} = 'CREATE';
info.MatPath{2} = 'REMOVE';
info.MatPath{3} = 'cmd';
info.MatPath{4} = 'name';
info.MatPath{5} = 'pose_origin';
info.MatPath{6} = 'pose_origin.position';
info.MatPath{7} = 'pose_origin.position.x';
info.MatPath{8} = 'pose_origin.position.y';
info.MatPath{9} = 'pose_origin.position.z';
info.MatPath{10} = 'pose_origin.rpy';
info.MatPath{11} = 'pose_origin.rpy.roll';
info.MatPath{12} = 'pose_origin.rpy.pitch';
info.MatPath{13} = 'pose_origin.rpy.yaw';
info.MatPath{14} = 'pose_1';
info.MatPath{15} = 'pose_1.position';
info.MatPath{16} = 'pose_1.position.x';
info.MatPath{17} = 'pose_1.position.y';
info.MatPath{18} = 'pose_1.position.z';
info.MatPath{19} = 'pose_1.rpy';
info.MatPath{20} = 'pose_1.rpy.roll';
info.MatPath{21} = 'pose_1.rpy.pitch';
info.MatPath{22} = 'pose_1.rpy.yaw';
info.MatPath{23} = 'pose_2';
info.MatPath{24} = 'pose_2.position';
info.MatPath{25} = 'pose_2.position.x';
info.MatPath{26} = 'pose_2.position.y';
info.MatPath{27} = 'pose_2.position.z';
info.MatPath{28} = 'pose_2.rpy';
info.MatPath{29} = 'pose_2.rpy.roll';
info.MatPath{30} = 'pose_2.rpy.pitch';
info.MatPath{31} = 'pose_2.rpy.yaw';
info.MatPath{32} = 'pose_3';
info.MatPath{33} = 'pose_3.position';
info.MatPath{34} = 'pose_3.position.x';
info.MatPath{35} = 'pose_3.position.y';
info.MatPath{36} = 'pose_3.position.z';
info.MatPath{37} = 'pose_3.rpy';
info.MatPath{38} = 'pose_3.rpy.roll';
info.MatPath{39} = 'pose_3.rpy.pitch';
info.MatPath{40} = 'pose_3.rpy.yaw';
