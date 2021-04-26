
classdef DigitalIOState < ros.Message
    %DigitalIOState MATLAB implementation of niryo_one_msgs/DigitalIOState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/DigitalIOState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'bfb33e3a012d1027925934dc7f71fdc3' % The MD5 Checksum of the message definition
        PropertyList = { 'Pins' 'Names' 'Modes' 'States' } % List of non-constant message properties
        ROSPropertyList = { 'pins' 'names' 'modes' 'states' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Pins
        Names
        Modes
        States
    end
    methods
        function set.Pins(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = int32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'DigitalIOState', 'Pins');
            obj.Pins = int32(val);
        end
        function set.Names(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'DigitalIOState', 'Names');
            obj.Names = cell(val);
        end
        function set.Modes(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = int32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'DigitalIOState', 'Modes');
            obj.Modes = int32(val);
        end
        function set.States(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = int32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'DigitalIOState', 'States');
            obj.States = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.DigitalIOState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.DigitalIOState;
            obj.reload(strObj);
        end
    end
end
