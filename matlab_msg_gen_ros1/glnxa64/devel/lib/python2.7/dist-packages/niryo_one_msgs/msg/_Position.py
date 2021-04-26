# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from niryo_one_msgs/Position.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import niryo_one_msgs.msg
import geometry_msgs.msg

class Position(genpy.Message):
  _md5sum = "0feca3eb53781851658482e6557e2045"
  _type = "niryo_one_msgs/Position"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string name

float64[] joints 
niryo_one_msgs/RPY rpy
geometry_msgs/Point point
geometry_msgs/Quaternion quaternion


================================================================================
MSG: niryo_one_msgs/RPY
# roll, pitch and yaw

float64 roll
float64 pitch
float64 yaw

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['name','joints','rpy','point','quaternion']
  _slot_types = ['string','float64[]','niryo_one_msgs/RPY','geometry_msgs/Point','geometry_msgs/Quaternion']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       name,joints,rpy,point,quaternion

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Position, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.name is None:
        self.name = ''
      if self.joints is None:
        self.joints = []
      if self.rpy is None:
        self.rpy = niryo_one_msgs.msg.RPY()
      if self.point is None:
        self.point = geometry_msgs.msg.Point()
      if self.quaternion is None:
        self.quaternion = geometry_msgs.msg.Quaternion()
    else:
      self.name = ''
      self.joints = []
      self.rpy = niryo_one_msgs.msg.RPY()
      self.point = geometry_msgs.msg.Point()
      self.quaternion = geometry_msgs.msg.Quaternion()

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
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.joints)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.joints))
      _x = self
      buff.write(_get_struct_10d().pack(_x.rpy.roll, _x.rpy.pitch, _x.rpy.yaw, _x.point.x, _x.point.y, _x.point.z, _x.quaternion.x, _x.quaternion.y, _x.quaternion.z, _x.quaternion.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.rpy is None:
        self.rpy = niryo_one_msgs.msg.RPY()
      if self.point is None:
        self.point = geometry_msgs.msg.Point()
      if self.quaternion is None:
        self.quaternion = geometry_msgs.msg.Quaternion()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.joints = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 80
      (_x.rpy.roll, _x.rpy.pitch, _x.rpy.yaw, _x.point.x, _x.point.y, _x.point.z, _x.quaternion.x, _x.quaternion.y, _x.quaternion.z, _x.quaternion.w,) = _get_struct_10d().unpack(str[start:end])
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
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.joints)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.joints.tostring())
      _x = self
      buff.write(_get_struct_10d().pack(_x.rpy.roll, _x.rpy.pitch, _x.rpy.yaw, _x.point.x, _x.point.y, _x.point.z, _x.quaternion.x, _x.quaternion.y, _x.quaternion.z, _x.quaternion.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.rpy is None:
        self.rpy = niryo_one_msgs.msg.RPY()
      if self.point is None:
        self.point = geometry_msgs.msg.Point()
      if self.quaternion is None:
        self.quaternion = geometry_msgs.msg.Quaternion()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.joints = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 80
      (_x.rpy.roll, _x.rpy.pitch, _x.rpy.yaw, _x.point.x, _x.point.y, _x.point.z, _x.quaternion.x, _x.quaternion.y, _x.quaternion.z, _x.quaternion.w,) = _get_struct_10d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_10d = None
def _get_struct_10d():
    global _struct_10d
    if _struct_10d is None:
        _struct_10d = struct.Struct("<10d")
    return _struct_10d
