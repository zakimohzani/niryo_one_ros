
classdef PullAirVacuumPumpResponse < ros.Message
    %PullAirVacuumPumpResponse MATLAB implementation of niryo_one_msgs/PullAirVacuumPumpResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/PullAirVacuumPumpResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '800f34bc468def1d86e2d42bea5648c0' % The MD5 Checksum of the message definition
        PropertyList = { 'State' } % List of non-constant message properties
        ROSPropertyList = { 'state' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        State
    end
    methods
        function set.State(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PullAirVacuumPumpResponse', 'State');
            obj.State = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.PullAirVacuumPumpResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.PullAirVacuumPumpResponse;
            obj.reload(strObj);
        end
    end
end
