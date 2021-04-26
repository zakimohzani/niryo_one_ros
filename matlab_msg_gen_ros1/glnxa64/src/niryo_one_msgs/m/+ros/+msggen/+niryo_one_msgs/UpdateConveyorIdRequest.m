
classdef UpdateConveyorIdRequest < ros.Message
    %UpdateConveyorIdRequest MATLAB implementation of niryo_one_msgs/UpdateConveyorIdRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/UpdateConveyorIdRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '3e7bf0b60e9cee26653ed700a1f3581c' % The MD5 Checksum of the message definition
        PropertyList = { 'OldId' 'NewId' } % List of non-constant message properties
        ROSPropertyList = { 'old_id' 'new_id' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        OldId
        NewId
    end
    methods
        function set.OldId(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'UpdateConveyorIdRequest', 'OldId');
            obj.OldId = uint8(val);
        end
        function set.NewId(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'UpdateConveyorIdRequest', 'NewId');
            obj.NewId = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.UpdateConveyorIdRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.UpdateConveyorIdRequest;
            obj.reload(strObj);
        end
    end
end
