
classdef SetCalibrationCamResponse < ros.Message
    %SetCalibrationCamResponse MATLAB implementation of niryo_one_msgs/SetCalibrationCamResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/SetCalibrationCamResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b8d517967bcdc1a37247f33181b13bc0' % The MD5 Checksum of the message definition
        PropertyList = { 'Status' } % List of non-constant message properties
        ROSPropertyList = { 'status' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
        SUCCESSFULLYSET = int32(0)
        OVERWRITTEN = int32(1)
        NOTSET = int32(-1)
    end
    properties
        Status
    end
    methods
        function set.Status(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetCalibrationCamResponse', 'Status');
            obj.Status = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.SetCalibrationCamResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.SetCalibrationCamResponse;
            obj.reload(strObj);
        end
    end
end
