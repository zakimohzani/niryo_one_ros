
classdef SetSequenceAutorunRequest < ros.Message
    %SetSequenceAutorunRequest MATLAB implementation of niryo_one_msgs/SetSequenceAutorunRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/SetSequenceAutorunRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1e43630c86d151dbfab48de76b057ceb' % The MD5 Checksum of the message definition
        PropertyList = { 'Enable' 'Mode' 'SequenceIds' } % List of non-constant message properties
        ROSPropertyList = { 'enable' 'mode' 'sequence_ids' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Enable
        Mode
        SequenceIds
    end
    methods
        function set.Enable(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetSequenceAutorunRequest', 'Enable');
            obj.Enable = logical(val);
        end
        function set.Mode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetSequenceAutorunRequest', 'Mode');
            obj.Mode = int32(val);
        end
        function set.SequenceIds(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = int32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'SetSequenceAutorunRequest', 'SequenceIds');
            obj.SequenceIds = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.SetSequenceAutorunRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.SetSequenceAutorunRequest;
            obj.reload(strObj);
        end
    end
end