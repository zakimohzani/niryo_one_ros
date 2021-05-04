
classdef DebugMarkersResponse < ros.Message
    %DebugMarkersResponse MATLAB implementation of niryo_one_msgs/DebugMarkersResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/DebugMarkersResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '63758d5125879b809b9c2ee90cbc28ff' % The MD5 Checksum of the message definition
        PropertyList = { 'Img' 'MarkersDetected' } % List of non-constant message properties
        ROSPropertyList = { 'img' 'markers_detected' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.sensor_msgs.CompressedImage' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Img
        MarkersDetected
    end
    methods
        function set.Img(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.sensor_msgs.CompressedImage'};
            validateattributes(val, validClasses, validAttributes, 'DebugMarkersResponse', 'Img')
            obj.Img = val;
        end
        function set.MarkersDetected(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'DebugMarkersResponse', 'MarkersDetected');
            obj.MarkersDetected = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.DebugMarkersResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.DebugMarkersResponse;
            obj.reload(strObj);
        end
    end
end