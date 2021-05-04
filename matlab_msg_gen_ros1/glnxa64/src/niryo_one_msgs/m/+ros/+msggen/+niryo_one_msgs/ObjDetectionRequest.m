
classdef ObjDetectionRequest < ros.Message
    %ObjDetectionRequest MATLAB implementation of niryo_one_msgs/ObjDetectionRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/ObjDetectionRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '7af8c917a587a5527345a87ab0262fe5' % The MD5 Checksum of the message definition
        PropertyList = { 'ObjType' 'ObjColor' 'WorkspaceRatio' 'RetImage' } % List of non-constant message properties
        ROSPropertyList = { 'obj_type' 'obj_color' 'workspace_ratio' 'ret_image' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ObjType
        ObjColor
        WorkspaceRatio
        RetImage
    end
    methods
        function set.ObjType(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionRequest', 'ObjType');
            obj.ObjType = char(val);
        end
        function set.ObjColor(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionRequest', 'ObjColor');
            obj.ObjColor = char(val);
        end
        function set.WorkspaceRatio(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionRequest', 'WorkspaceRatio');
            obj.WorkspaceRatio = single(val);
        end
        function set.RetImage(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjDetectionRequest', 'RetImage');
            obj.RetImage = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.ObjDetectionRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.ObjDetectionRequest;
            obj.reload(strObj);
        end
    end
end