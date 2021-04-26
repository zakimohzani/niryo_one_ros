
classdef ManagePositionRequest < ros.Message
    %ManagePositionRequest MATLAB implementation of niryo_one_msgs/ManagePositionRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/ManagePositionRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '7489689e7c0b61df395f1006b4d834d9' % The MD5 Checksum of the message definition
        PropertyList = { 'Position' 'CmdType' 'PositionName' } % List of non-constant message properties
        ROSPropertyList = { 'position' 'cmd_type' 'position_name' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.niryo_one_msgs.Position' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Position
        CmdType
        PositionName
    end
    methods
        function set.Position(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.niryo_one_msgs.Position'};
            validateattributes(val, validClasses, validAttributes, 'ManagePositionRequest', 'Position')
            obj.Position = val;
        end
        function set.CmdType(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ManagePositionRequest', 'CmdType');
            obj.CmdType = int32(val);
        end
        function set.PositionName(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ManagePositionRequest', 'PositionName');
            obj.PositionName = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.ManagePositionRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.ManagePositionRequest;
            obj.reload(strObj);
        end
    end
end
