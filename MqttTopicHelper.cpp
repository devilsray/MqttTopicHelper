#include "MqttTopicsHelper.h"

MqttTopicsHelper::MqttTopicsHelper(const char* prefix){
  _prefix = prefix;
}

MqttTopicsHelper::MqttTopicsHelper(){
  _prefix = "";
}

const char* MqttTopicsHelper::getTopic(char* itemName, const char* suffix){
  //char buffer[sizeof(_prefix) + sizeof(itemName) + sizeof(itemName) + sizeof(suffix)];
  sprintf(_buffer, "%s/%s/%s", _prefix, itemName, suffix);
  return _buffer;
}

const char* MqttTopicsHelper::getTopic(char* itemName){
  //char buffer[sizeof(_prefix) + sizeof(itemName)];
  sprintf(_buffer, "%s/%s", _prefix, itemName);
  return _buffer;
}

void MqttTopicsHelper::updatePrefix(const char* prefix){
  _prefix = prefix;
}
