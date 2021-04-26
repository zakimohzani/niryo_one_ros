
classdef PushAirVacuumPumpRequest < ros.Message
    %PushAirVacuumPumpRequest MATLAB implementation of niryo_one_msgs/PushAirVacuumPumpRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/PushAirVacuumPumpRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '241a1d54cb582cd640291974c0311e9f' % The MD5 Checksum of the message definition
        PropertyList = { 'Id' 'PushAirPosition' } % List of non-constant message properties
        ROSPropertyList = { 'id' 'push_air_position' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Id
        PushAirPosition
    end
    methods
        function set.Id(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PushAirVacuumPumpRequest', 'Id');
            obj.Id = uint8(val);
        end
        function set.PushAirPosition(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PushAirVacuumPumpRequest', 'PushAirPosition');
            obj.PushAirPosition = int16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.PushAirVacuumPumpRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.PushAirVacuumPumpRequest;
            obj.reload(strObj);
        end
    end
end
