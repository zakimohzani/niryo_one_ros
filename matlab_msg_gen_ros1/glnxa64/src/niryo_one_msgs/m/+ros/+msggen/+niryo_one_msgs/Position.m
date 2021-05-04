
classdef Position < ros.Message
    %Position MATLAB implementation of niryo_one_msgs/Position
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/Position' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '0feca3eb53781851658482e6557e2045' % The MD5 Checksum of the message definition
        PropertyList = { 'Rpy' 'Point' 'Quaternion' 'Name' 'Joints' } % List of non-constant message properties
        ROSPropertyList = { 'rpy' 'point' 'quaternion' 'name' 'joints' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.niryo_one_msgs.RPY' ...
			 'ros.msggen.geometry_msgs.Point' ...
			 'ros.msg.geometry_msgs.Quaternion' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Rpy
        Point
        Quaternion
        Name
        Joints
    end
    methods
        function set.Rpy(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.niryo_one_msgs.RPY'};
            validateattributes(val, validClasses, validAttributes, 'Position', 'Rpy')
            obj.Rpy = val;
        end
        function set.Point(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Point'};
            validateattributes(val, validClasses, validAttributes, 'Position', 'Point')
            obj.Point = val;
        end
        function set.Quaternion(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.geometry_msgs.Quaternion'};
            validateattributes(val, validClasses, validAttributes, 'Position', 'Quaternion')
            obj.Quaternion = val;
        end
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Position', 'Name');
            obj.Name = char(val);
        end
        function set.Joints(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Position', 'Joints');
            obj.Joints = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.Position.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.Position;
            obj.reload(strObj);
        end
    end
end