
classdef GetPositionListResponse < ros.Message
    %GetPositionListResponse MATLAB implementation of niryo_one_msgs/GetPositionListResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/GetPositionListResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '94fc33768181f413c5377ded0d0f7df2' % The MD5 Checksum of the message definition
        PropertyList = { 'Positions' } % List of non-constant message properties
        ROSPropertyList = { 'positions' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.niryo_one_msgs.Position' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Positions
    end
    methods
        function set.Positions(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.niryo_one_msgs.Position.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.niryo_one_msgs.Position'};
            validateattributes(val, validClasses, validAttributes, 'GetPositionListResponse', 'Positions')
            obj.Positions = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.GetPositionListResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.GetPositionListResponse;
            obj.reload(strObj);
        end
    end
end