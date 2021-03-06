classdef fusion_overlay < robotics.ros.Message
    %fusion_overlay MATLAB implementation of visualization/fusion_overlay
    %   This class was automatically generated by
    %   robotics.ros.msg.internal.gen.MessageClassGenerator.
    
    %   Copyright 2014-2017 The MathWorks, Inc.
    
    %#ok<*INUSD>
    
    properties (Constant)
        MessageType = 'visualization/fusion_overlay' % The ROS message type
    end
    
    properties (Constant, Hidden)
        MD5Checksum = 'a5519680eaf65b54a21dd39863066fb1' % The MD5 Checksum of the message definition
    end
    
    properties (Access = protected)
        JavaMessage % The Java message object
    end
    
    properties (Dependent)
        SeqID
        ImageHwTimeStamp
        FusionPoints
        Range
    end
    
    properties (Constant, Hidden)
        PropertyList = {'FusionPoints', 'ImageHwTimeStamp', 'Range', 'SeqID'} % List of non-constant message properties
        ROSPropertyList = {'fusionPoints', 'imageHwTimeStamp', 'range', 'seqID'} % List of non-constant ROS message properties
    end
    
    methods
        function obj = fusion_overlay(msg)
            %fusion_overlay Construct the message object fusion_overlay
            import com.mathworks.toolbox.robotics.ros.message.MessageInfo;
            
            % Support default constructor
            if nargin == 0
                obj.JavaMessage = obj.createNewJavaMessage;
                return;
            end
            
            % Construct appropriate empty array
            if isempty(msg)
                obj = obj.empty(0,1);
                return;
            end
            
            % Make scalar construction fast
            if isscalar(msg)
                % Check for correct input class
                if ~MessageInfo.compareTypes(msg(1), obj.MessageType)
                    error(message('robotics:ros:message:NoTypeMatch', obj.MessageType, ...
                        char(MessageInfo.getType(msg(1))) ));
                end
                obj.JavaMessage = msg(1);
                return;
            end
            
            % Check that this is a vector of scalar messages. Since this
            % is an object array, use arrayfun to verify.
            if ~all(arrayfun(@isscalar, msg))
                error(message('robotics:ros:message:MessageArraySizeError'));
            end
            
            % Check that all messages in the array have the correct type
            if ~all(arrayfun(@(x) MessageInfo.compareTypes(x, obj.MessageType), msg))
                error(message('robotics:ros:message:NoTypeMatchArray', obj.MessageType));
            end
            
            % Construct array of objects if necessary
            objType = class(obj);
            for i = 1:length(msg)
                obj(i,1) = feval(objType, msg(i)); %#ok<AGROW>
            end
        end
        
        function seqid = get.SeqID(obj)
            %get.SeqID Get the value for property SeqID
            seqid = typecast(int32(obj.JavaMessage.getSeqID), 'uint32');
        end
        
        function set.SeqID(obj, seqid)
            %set.SeqID Set the value for property SeqID
            validateattributes(seqid, {'numeric'}, {'nonempty', 'scalar'}, 'fusion_overlay', 'SeqID');
            
            obj.JavaMessage.setSeqID(seqid);
        end
        
        function imagehwtimestamp = get.ImageHwTimeStamp(obj)
            %get.ImageHwTimeStamp Get the value for property ImageHwTimeStamp
            imagehwtimestamp = typecast(int32(obj.JavaMessage.getImageHwTimeStamp), 'uint32');
        end
        
        function set.ImageHwTimeStamp(obj, imagehwtimestamp)
            %set.ImageHwTimeStamp Set the value for property ImageHwTimeStamp
            validateattributes(imagehwtimestamp, {'numeric'}, {'nonempty', 'scalar'}, 'fusion_overlay', 'ImageHwTimeStamp');
            
            obj.JavaMessage.setImageHwTimeStamp(imagehwtimestamp);
        end
        
        function fusionpoints = get.FusionPoints(obj)
            %get.FusionPoints Get the value for property FusionPoints
            javaArray = obj.JavaMessage.getFusionPoints;
            array = obj.readJavaArray(javaArray, 'single');
            fusionpoints = single(array);
        end
        
        function set.FusionPoints(obj, fusionpoints)
            %set.FusionPoints Set the value for property FusionPoints
            if ~isvector(fusionpoints) && isempty(fusionpoints)
                % Allow empty [] input
                fusionpoints = single.empty(0,1);
            end
            
            validateattributes(fusionpoints, {'numeric'}, {'vector'}, 'fusion_overlay', 'FusionPoints');
            
            javaArray = obj.JavaMessage.getFusionPoints;
            array = obj.writeJavaArray(fusionpoints, javaArray, 'single');
            obj.JavaMessage.setFusionPoints(array);
        end
        
        function range = get.Range(obj)
            %get.Range Get the value for property Range
            javaArray = obj.JavaMessage.getRange;
            array = obj.readJavaArray(javaArray, 'single');
            range = single(array);
        end
        
        function set.Range(obj, range)
            %set.Range Set the value for property Range
            if ~isvector(range) && isempty(range)
                % Allow empty [] input
                range = single.empty(0,1);
            end
            
            validateattributes(range, {'numeric'}, {'vector'}, 'fusion_overlay', 'Range');
            
            javaArray = obj.JavaMessage.getRange;
            array = obj.writeJavaArray(range, javaArray, 'single');
            obj.JavaMessage.setRange(array);
        end
    end
    
    methods (Access = protected)
        function cpObj = copyElement(obj)
            %copyElement Implements deep copy behavior for message
            
            % Call default copy method for shallow copy
            cpObj = copyElement@robotics.ros.Message(obj);
            
            % Create a new Java message object
            cpObj.JavaMessage = obj.createNewJavaMessage;
            
            % Iterate over all primitive properties
            cpObj.SeqID = obj.SeqID;
            cpObj.ImageHwTimeStamp = obj.ImageHwTimeStamp;
            cpObj.FusionPoints = obj.FusionPoints;
            cpObj.Range = obj.Range;
        end
        
        function reload(obj, strObj)
            %reload Called by loadobj to assign properties
            obj.SeqID = strObj.SeqID;
            obj.ImageHwTimeStamp = strObj.ImageHwTimeStamp;
            obj.FusionPoints = strObj.FusionPoints;
            obj.Range = strObj.Range;
        end
    end
    
    methods (Access = ?robotics.ros.Message)
        function strObj = saveobj(obj)
            %saveobj Implements saving of message to MAT file
            
            % Return an empty element if object array is empty
            if isempty(obj)
                strObj = struct.empty;
                return
            end
            
            strObj.SeqID = obj.SeqID;
            strObj.ImageHwTimeStamp = obj.ImageHwTimeStamp;
            strObj.FusionPoints = obj.FusionPoints;
            strObj.Range = obj.Range;
        end
    end
    
    methods (Static, Access = {?matlab.unittest.TestCase, ?robotics.ros.Message})
        function obj = loadobj(strObj)
            %loadobj Implements loading of message from MAT file
            
            % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = robotics.ros.custom.msggen.visualization.fusion_overlay.empty(0,1);
                return
            end
            
            % Create an empty message object
            obj = robotics.ros.custom.msggen.visualization.fusion_overlay;
            obj.reload(strObj);
        end
    end
end
