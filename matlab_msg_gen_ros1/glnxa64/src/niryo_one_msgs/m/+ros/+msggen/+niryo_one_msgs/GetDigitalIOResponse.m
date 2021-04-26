
classdef GetDigitalIOResponse < ros.Message
    %GetDigitalIOResponse MATLAB implementation of niryo_one_msgs/GetDigitalIOResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/GetDigitalIOResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'dd04d011c9f4aa1662b6b951b30e2974' % The MD5 Checksum of the message definition
        PropertyList = { 'Status' 'Message' 'Pin' 'Name' 'Mode' 'State' } % List of non-constant message properties
        ROSPropertyList = { 'status' 'message' 'pin' 'name' 'mode' 'state' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Status
        Message
        Pin
        Name
        Mode
        State
    end
    methods
        function set.Status(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIOResponse', 'Status');
            obj.Status = int32(val);
        end
        function set.Message(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIOResponse', 'Message');
            obj.Message = char(val);
        end
        function set.Pin(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIOResponse', 'Pin');
            obj.Pin = int32(val);
        end
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIOResponse', 'Name');
            obj.Name = char(val);
        end
        function set.Mode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIOResponse', 'Mode');
            obj.Mode = int32(val);
        end
        function set.State(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIOResponse', 'State');
            obj.State = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.GetDigitalIOResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.GetDigitalIOResponse;
            obj.reload(strObj);
        end
    end
end
