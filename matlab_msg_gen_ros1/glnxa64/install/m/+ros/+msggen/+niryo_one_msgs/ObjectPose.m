
classdef ObjectPose < ros.Message
    %ObjectPose MATLAB implementation of niryo_one_msgs/ObjectPose
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/ObjectPose' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1a83f0bdabe750ce0cfb45a14ec63457' % The MD5 Checksum of the message definition
        PropertyList = { 'X' 'Y' 'Z' 'Roll' 'Pitch' 'Yaw' } % List of non-constant message properties
        ROSPropertyList = { 'x' 'y' 'z' 'roll' 'pitch' 'yaw' } % List of non-constant ROS message properties
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
        X
        Y
        Z
        Roll
        Pitch
        Yaw
    end
    methods
        function set.X(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjectPose', 'X');
            obj.X = double(val);
        end
        function set.Y(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjectPose', 'Y');
            obj.Y = double(val);
        end
        function set.Z(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjectPose', 'Z');
            obj.Z = double(val);
        end
        function set.Roll(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjectPose', 'Roll');
            obj.Roll = double(val);
        end
        function set.Pitch(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjectPose', 'Pitch');
            obj.Pitch = double(val);
        end
        function set.Yaw(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ObjectPose', 'Yaw');
            obj.Yaw = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.ObjectPose.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.ObjectPose;
            obj.reload(strObj);
        end
    end
end