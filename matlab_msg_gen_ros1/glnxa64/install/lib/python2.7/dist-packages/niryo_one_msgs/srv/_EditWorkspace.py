# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from niryo_one_msgs/EditWorkspaceRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import niryo_one_msgs.msg
import geometry_msgs.msg

class EditWorkspaceRequest(genpy.Message):
  _md5sum = "ba9b3580344c5b5274fc4771afa1010d"
  _type = "niryo_one_msgs/EditWorkspaceRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 CREATE = 1
int32 REMOVE = -1

int32 cmd
string name
niryo_one_msgs/RobotState pose_origin
niryo_one_msgs/RobotState pose_1
niryo_one_msgs/RobotState pose_2
niryo_one_msgs/RobotState pose_3

================================================================================
MSG: niryo_one_msgs/RobotState

geometry_msgs/Point position
niryo_one_msgs/RPY rpy

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: niryo_one_msgs/RPY
# roll, pitch and yaw

float64 roll
float64 pitch
float64 yaw
"""
  # Pseudo-constants
  CREATE = 1
  REMOVE = -1

  __slots__ = ['cmd','name','pose_origin','pose_1','pose_2','pose_3']
  _slot_types = ['int32','string','niryo_one_msgs/RobotState','niryo_one_msgs/RobotState','niryo_one_msgs/RobotState','niryo_one_msgs/RobotState']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cmd,name,pose_origin,pose_1,pose_2,pose_3

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EditWorkspaceRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cmd is None:
        self.cmd = 0
      if self.name is None:
        self.name = ''
      if self.pose_origin is None:
        self.pose_origin = niryo_one_msgs.msg.RobotState()
      if self.pose_1 is None:
        self.pose_1 = niryo_one_msgs.msg.RobotState()
      if self.pose_2 is None:
        self.pose_2 = niryo_one_msgs.msg.RobotState()
      if self.pose_3 is None:
        self.pose_3 = niryo_one_msgs.msg.RobotState()
    else:
      self.cmd = 0
      self.name = ''
      self.pose_origin = niryo_one_msgs.msg.RobotState()
      self.pose_1 = niryo_one_msgs.msg.RobotState()
      self.pose_2 = niryo_one_msgs.msg.RobotState()
      self.pose_3 = niryo_one_msgs.msg.RobotState()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_i().pack(self.cmd))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_24d().pack(_x.pose_origin.position.x, _x.pose_origin.position.y, _x.pose_origin.position.z, _x.pose_origin.rpy.roll, _x.pose_origin.rpy.pitch, _x.pose_origin.rpy.yaw, _x.pose_1.position.x, _x.pose_1.position.y, _x.pose_1.position.z, _x.pose_1.rpy.roll, _x.pose_1.rpy.pitch, _x.pose_1.rpy.yaw, _x.pose_2.position.x, _x.pose_2.position.y, _x.pose_2.position.z, _x.pose_2.rpy.roll, _x.pose_2.rpy.pitch, _x.pose_2.rpy.yaw, _x.pose_3.position.x, _x.pose_3.position.y, _x.pose_3.position.z, _x.pose_3.rpy.roll, _x.pose_3.rpy.pitch, _x.pose_3.rpy.yaw))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.pose_origin is None:
        self.pose_origin = niryo_one_msgs.msg.RobotState()
      if self.pose_1 is None:
        self.pose_1 = niryo_one_msgs.msg.RobotState()
      if self.pose_2 is None:
        self.pose_2 = niryo_one_msgs.msg.RobotState()
      if self.pose_3 is None:
        self.pose_3 = niryo_one_msgs.msg.RobotState()
      end = 0
      start = end
      end += 4
      (self.cmd,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      _x = self
      start = end
      end += 192
      (_x.pose_origin.position.x, _x.pose_origin.position.y, _x.pose_origin.position.z, _x.pose_origin.rpy.roll, _x.pose_origin.rpy.pitch, _x.pose_origin.rpy.yaw, _x.pose_1.position.x, _x.pose_1.position.y, _x.pose_1.position.z, _x.pose_1.rpy.roll, _x.pose_1.rpy.pitch, _x.pose_1.rpy.yaw, _x.pose_2.position.x, _x.pose_2.position.y, _x.pose_2.position.z, _x.pose_2.rpy.roll, _x.pose_2.rpy.pitch, _x.pose_2.rpy.yaw, _x.pose_3.position.x, _x.pose_3.position.y, _x.pose_3.position.z, _x.pose_3.rpy.roll, _x.pose_3.rpy.pitch, _x.pose_3.rpy.yaw,) = _get_struct_24d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_i().pack(self.cmd))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_24d().pack(_x.pose_origin.position.x, _x.pose_origin.position.y, _x.pose_origin.position.z, _x.pose_origin.rpy.roll, _x.pose_origin.rpy.pitch, _x.pose_origin.rpy.yaw, _x.pose_1.position.x, _x.pose_1.position.y, _x.pose_1.position.z, _x.pose_1.rpy.roll, _x.pose_1.rpy.pitch, _x.pose_1.rpy.yaw, _x.pose_2.position.x, _x.pose_2.position.y, _x.pose_2.position.z, _x.pose_2.rpy.roll, _x.pose_2.rpy.pitch, _x.pose_2.rpy.yaw, _x.pose_3.position.x, _x.pose_3.position.y, _x.pose_3.position.z, _x.pose_3.rpy.roll, _x.pose_3.rpy.pitch, _x.pose_3.rpy.yaw))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.pose_origin is None:
        self.pose_origin = niryo_one_msgs.msg.RobotState()
      if self.pose_1 is None:
        self.pose_1 = niryo_one_msgs.msg.RobotState()
      if self.pose_2 is None:
        self.pose_2 = niryo_one_msgs.msg.RobotState()
      if self.pose_3 is None:
        self.pose_3 = niryo_one_msgs.msg.RobotState()
      end = 0
      start = end
      end += 4
      (self.cmd,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      _x = self
      start = end
      end += 192
      (_x.pose_origin.position.x, _x.pose_origin.position.y, _x.pose_origin.position.z, _x.pose_origin.rpy.roll, _x.pose_origin.rpy.pitch, _x.pose_origin.rpy.yaw, _x.pose_1.position.x, _x.pose_1.position.y, _x.pose_1.position.z, _x.pose_1.rpy.roll, _x.pose_1.rpy.pitch, _x.pose_1.rpy.yaw, _x.pose_2.position.x, _x.pose_2.position.y, _x.pose_2.position.z, _x.pose_2.rpy.roll, _x.pose_2.rpy.pitch, _x.pose_2.rpy.yaw, _x.pose_3.position.x, _x.pose_3.position.y, _x.pose_3.position.z, _x.pose_3.rpy.roll, _x.pose_3.rpy.pitch, _x.pose_3.rpy.yaw,) = _get_struct_24d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_24d = None
def _get_struct_24d():
    global _struct_24d
    if _struct_24d is None:
        _struct_24d = struct.Struct("<24d")
    return _struct_24d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from niryo_one_msgs/EditWorkspaceResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class EditWorkspaceResponse(genpy.Message):
  _md5sum = "2c1d00fb8b4e78420f43d93d5292a429"
  _type = "niryo_one_msgs/EditWorkspaceResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 status
string message

"""
  __slots__ = ['status','message']
  _slot_types = ['int32','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       status,message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EditWorkspaceResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.status is None:
        self.status = 0
      if self.message is None:
        self.message = ''
    else:
      self.status = 0
      self.message = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_i().pack(self.status))
      _x = self.message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (self.status,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.message = str[start:end].decode('utf-8')
      else:
        self.message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_i().pack(self.status))
      _x = self.message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (self.status,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.message = str[start:end].decode('utf-8')
      else:
        self.message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
class EditWorkspace(object):
  _type          = 'niryo_one_msgs/EditWorkspace'
  _md5sum = 'd54856ae48391661101e9b86f647a340'
  _request_class  = EditWorkspaceRequest
  _response_class = EditWorkspaceResponse
