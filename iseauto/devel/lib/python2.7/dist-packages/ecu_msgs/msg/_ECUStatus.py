# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ecu_msgs/ECUStatus.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ECUStatus(genpy.Message):
  _md5sum = "356fcc37a358f36076bdf62f35f15a0d"
  _type = "ecu_msgs/ECUStatus"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool sensors
bool drive
string battery
bool running
bool quit

"""
  __slots__ = ['sensors','drive','battery','running','quit']
  _slot_types = ['bool','bool','string','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       sensors,drive,battery,running,quit

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ECUStatus, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.sensors is None:
        self.sensors = False
      if self.drive is None:
        self.drive = False
      if self.battery is None:
        self.battery = ''
      if self.running is None:
        self.running = False
      if self.quit is None:
        self.quit = False
    else:
      self.sensors = False
      self.drive = False
      self.battery = ''
      self.running = False
      self.quit = False

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
      buff.write(_get_struct_2B().pack(_x.sensors, _x.drive))
      _x = self.battery
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2B().pack(_x.running, _x.quit))
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
      end += 2
      (_x.sensors, _x.drive,) = _get_struct_2B().unpack(str[start:end])
      self.sensors = bool(self.sensors)
      self.drive = bool(self.drive)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.battery = str[start:end].decode('utf-8')
      else:
        self.battery = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.running, _x.quit,) = _get_struct_2B().unpack(str[start:end])
      self.running = bool(self.running)
      self.quit = bool(self.quit)
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
      buff.write(_get_struct_2B().pack(_x.sensors, _x.drive))
      _x = self.battery
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2B().pack(_x.running, _x.quit))
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
      end += 2
      (_x.sensors, _x.drive,) = _get_struct_2B().unpack(str[start:end])
      self.sensors = bool(self.sensors)
      self.drive = bool(self.drive)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.battery = str[start:end].decode('utf-8')
      else:
        self.battery = str[start:end]
      _x = self
      start = end
      end += 2
      (_x.running, _x.quit,) = _get_struct_2B().unpack(str[start:end])
      self.running = bool(self.running)
      self.quit = bool(self.quit)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
