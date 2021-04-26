
classdef GetDigitalIORequest < ros.Message
    %GetDigitalIORequest MATLAB implementation of niryo_one_msgs/GetDigitalIORequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/GetDigitalIORequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '8921a2ed89c1a30dd6fec7e140bf82c6' % The MD5 Checksum of the message definition
        PropertyList = { 'Pin' } % List of non-constant message properties
        ROSPropertyList = { 'pin' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Pin
    end
    methods
        function set.Pin(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetDigitalIORequest', 'Pin');
            obj.Pin = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.GetDigitalIORequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.GetDigitalIORequest;
            obj.reload(strObj);
        end
    end
end
