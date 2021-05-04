
classdef ObjDetectionResponse < ros.Message
    %ObjDetectionResponse MATLAB implementation of niryo_one_msgs/ObjDetectionResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/ObjDetectionResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b91b10d20d54e39c0903545ec757c896' % The MD5 Checksum of the message definition
        PropertyList = { 'ObjPose' 'Img' 'Status' 'ObjType' 'ObjColor' } % List of non-constant message properties
        ROSPropertyList = { 'obj_pose' 'img' 'status' 'obj_type' 'obj_color' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.niryo_one_msgs.ObjectPose' ...
			 'ros.msg.sensor_msgs.CompressedImage' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
        SUCCESSFUL = int32(1)
        VIDEOSTREAMNOTRUNNING = int32(-1)
        OBJECTNOTFOUND = int32(-2)
        MARKERSNOTFOUND = int32(-3)
    end
    properties
        ObjPose
        Img
        Status
        ObjType
        ObjColor
    end
    methods
        function set.ObjPose(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.niryo_one_msgs.ObjectPose'};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionResponse', 'ObjPose')
            obj.ObjPose = val;
        end
        function set.Img(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.sensor_msgs.CompressedImage'};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionResponse', 'Img')
            obj.Img = val;
        end
        function set.Status(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionResponse', 'Status');
            obj.Status = int32(val);
        end
        function set.ObjType(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionResponse', 'ObjType');
            obj.ObjType = char(val);
        end
        function set.ObjColor(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionResponse', 'ObjColor');
            obj.ObjColor = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.ObjDetectionResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.ObjDetectionResponse;
            obj.reload(strObj);
        end
    end
end