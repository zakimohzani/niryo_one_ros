function [data, info] = getWorkspaceListResponse
%GetWorkspaceList gives an empty data for niryo_one_msgs/GetWorkspaceListResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.workspaces, info.workspaces] = ros.internal.ros.messages.ros.char('string',NaN);
info.MessageType = 'niryo_one_msgs/GetWorkspaceListResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'workspaces';
