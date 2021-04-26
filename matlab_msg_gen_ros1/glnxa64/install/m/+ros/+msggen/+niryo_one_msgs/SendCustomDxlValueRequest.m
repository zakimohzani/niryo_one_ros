
classdef SendCustomDxlValueRequest < ros.Message
    %SendCustomDxlValueRequest MATLAB implementation of niryo_one_msgs/SendCustomDxlValueRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/SendCustomDxlValueRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '9cc34e89b5ce860f1d87d7de4d367a5b' % The MD5 Checksum of the message definition
        PropertyList = { 'MotorType' 'Id' 'Value' 'RegAddress' 'ByteNumber' } % List of non-constant message properties
        ROSPropertyList = { 'motor_type' 'id' 'value' 'reg_address' 'byte_number' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        MotorType
        Id
        Value
        RegAddress
        ByteNumber
    end
    methods
        function set.MotorType(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SendCustomDxlValueRequest', 'MotorType');
            obj.MotorType = int32(val);
        end
        function set.Id(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SendCustomDxlValueRequest', 'Id');
            obj.Id = uint8(val);
        end
        function set.Value(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SendCustomDxlValueRequest', 'Value');
            obj.Value = int32(val);
        end
        function set.RegAddress(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SendCustomDxlValueRequest', 'RegAddress');
            obj.RegAddress = int32(val);
        end
        function set.ByteNumber(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SendCustomDxlValueRequest', 'ByteNumber');
            obj.ByteNumber = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.SendCustomDxlValueRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.SendCustomDxlValueRequest;
            obj.reload(strObj);
        end
    end
end
