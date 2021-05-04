
classdef SetIntRequest < ros.Message
    %SetIntRequest MATLAB implementation of niryo_one_msgs/SetIntRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/SetIntRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b3087778e93fcd34cc8d65bc54e850d1' % The MD5 Checksum of the message definition
        PropertyList = { 'Value' } % List of non-constant message properties
        ROSPropertyList = { 'value' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Value
    end
    methods
        function set.Value(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetIntRequest', 'Value');
            obj.Value = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.SetIntRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.SetIntRequest;
            obj.reload(strObj);
        end
    end
end