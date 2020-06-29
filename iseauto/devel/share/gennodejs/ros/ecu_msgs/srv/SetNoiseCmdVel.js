// Auto-generated. Do not edit!

// (in-package ecu_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetNoiseCmdVelRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.linear = null;
      this.angular = null;
    }
    else {
      if (initObj.hasOwnProperty('linear')) {
        this.linear = initObj.linear
      }
      else {
        this.linear = 0.0;
      }
      if (initObj.hasOwnProperty('angular')) {
        this.angular = initObj.angular
      }
      else {
        this.angular = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetNoiseCmdVelRequest
    // Serialize message field [linear]
    bufferOffset = _serializer.float64(obj.linear, buffer, bufferOffset);
    // Serialize message field [angular]
    bufferOffset = _serializer.float64(obj.angular, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetNoiseCmdVelRequest
    let len;
    let data = new SetNoiseCmdVelRequest(null);
    // Deserialize message field [linear]
    data.linear = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [angular]
    data.angular = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ecu_msgs/SetNoiseCmdVelRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '144a16e4d6b53a0dbadc2e617460a173';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 linear
    float64 angular
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetNoiseCmdVelRequest(null);
    if (msg.linear !== undefined) {
      resolved.linear = msg.linear;
    }
    else {
      resolved.linear = 0.0
    }

    if (msg.angular !== undefined) {
      resolved.angular = msg.angular;
    }
    else {
      resolved.angular = 0.0
    }

    return resolved;
    }
};

class SetNoiseCmdVelResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
      this.message = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0.0;
      }
      if (initObj.hasOwnProperty('message')) {
        this.message = initObj.message
      }
      else {
        this.message = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetNoiseCmdVelResponse
    // Serialize message field [result]
    bufferOffset = _serializer.float64(obj.result, buffer, bufferOffset);
    // Serialize message field [message]
    bufferOffset = _serializer.string(obj.message, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetNoiseCmdVelResponse
    let len;
    let data = new SetNoiseCmdVelResponse(null);
    // Deserialize message field [result]
    data.result = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [message]
    data.message = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.message.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ecu_msgs/SetNoiseCmdVelResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4c149b2183b45b3aae9f20b4bf113766';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 result
    string message
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetNoiseCmdVelResponse(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0.0
    }

    if (msg.message !== undefined) {
      resolved.message = msg.message;
    }
    else {
      resolved.message = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: SetNoiseCmdVelRequest,
  Response: SetNoiseCmdVelResponse,
  md5sum() { return 'd41e247b85cef4fd0ed55934aa9d3071'; },
  datatype() { return 'ecu_msgs/SetNoiseCmdVel'; }
};
