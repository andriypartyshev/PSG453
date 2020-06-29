# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from themis_msgs/ModeControl.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ModeControl(genpy.Message):
  _md5sum = "ad5484922684f97570b593292ada2bf9"
  _type = "themis_msgs/ModeControl"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 vehicle
uint8 generator
uint8 speed
uint8 brake
uint8 charge
"""
  __slots__ = ['vehicle','generator','speed','brake','charge']
  _slot_types = ['uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       vehicle,generator,speed,brake,charge

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ModeControl, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.vehicle is None:
        self.vehicle = 0
      if self.generator is None:
        self.generator = 0
      if self.speed is None:
        self.speed = 0
      if self.brake is None:
        self.brake = 0
      if self.charge is None:
        self.charge = 0
    else:
      self.vehicle = 0
      self.generator = 0
      self.speed = 0
      self.brake = 0
      self.charge = 0

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
      buff.write(_get_struct_5B().pack(_x.vehicle, _x.generator, _x.speed, _x.brake, _x.charge))
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
      end += 5
      (_x.vehicle, _x.generator, _x.speed, _x.brake, _x.charge,) = _get_struct_5B().unpack(str[start:end])
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
      buff.write(_get_struct_5B().pack(_x.vehicle, _x.generator, _x.speed, _x.brake, _x.charge))
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
      end += 5
      (_x.vehicle, _x.generator, _x.speed, _x.brake, _x.charge,) = _get_struct_5B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5B = None
def _get_struct_5B():
    global _struct_5B
    if _struct_5B is None:
        _struct_5B = struct.Struct("<5B")
    return _struct_5B
