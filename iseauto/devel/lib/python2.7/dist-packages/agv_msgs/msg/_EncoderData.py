# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from agv_msgs/EncoderData.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class EncoderData(genpy.Message):
  _md5sum = "5ed93d667b28e9c960e1b5b4789dc7c5"
  _type = "agv_msgs/EncoderData"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 velocity
float32 distance

uint8 units
uint8 RPM=0     # velocity in rpm,      distance in rotations
uint8 RAD_S=1   # velocity in rad/s,    distance in radians
uint8 M_S=2     # velocity in m/s,      distance in metres
uint8 TICKS=3   # velocity in ticks/s,  distance in ticks
"""
  # Pseudo-constants
  RPM = 0
  RAD_S = 1
  M_S = 2
  TICKS = 3

  __slots__ = ['velocity','distance','units']
  _slot_types = ['float32','float32','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       velocity,distance,units

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EncoderData, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.velocity is None:
        self.velocity = 0.
      if self.distance is None:
        self.distance = 0.
      if self.units is None:
        self.units = 0
    else:
      self.velocity = 0.
      self.distance = 0.
      self.units = 0

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
      _x = self
      buff.write(_get_struct_2fB().pack(_x.velocity, _x.distance, _x.units))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.velocity, _x.distance, _x.units,) = _get_struct_2fB().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_2fB().pack(_x.velocity, _x.distance, _x.units))
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
      _x = self
      start = end
      end += 9
      (_x.velocity, _x.distance, _x.units,) = _get_struct_2fB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2fB = None
def _get_struct_2fB():
    global _struct_2fB
    if _struct_2fB is None:
        _struct_2fB = struct.Struct("<2fB")
    return _struct_2fB
