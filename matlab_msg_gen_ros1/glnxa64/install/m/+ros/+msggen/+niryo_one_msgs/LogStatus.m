
classdef LogStatus < ros.Message
    %LogStatus MATLAB implementation of niryo_one_msgs/LogStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'niryo_one_msgs/LogStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '37de8006fbbed6f8e3b23a8291bb9bf7' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'LogSize' 'AvailableDiskSize' 'PurgeLogOnStartup' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'log_size' 'available_disk_size' 'purge_log_on_startup' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        LogSize
        AvailableDiskSize
        PurgeLogOnStartup
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'LogStatus', 'Header')
            obj.Header = val;
        end
        function set.LogSize(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'LogStatus', 'LogSize');
            obj.LogSize = int32(val);
        end
        function set.AvailableDiskSize(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'LogStatus', 'AvailableDiskSize');
            obj.AvailableDiskSize = int32(val);
        end
        function set.PurgeLogOnStartup(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'LogStatus', 'PurgeLogOnStartup');
            obj.PurgeLogOnStartup = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.niryo_one_msgs.LogStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.niryo_one_msgs.LogStatus;
            obj.reload(strObj);
        end
    end
end