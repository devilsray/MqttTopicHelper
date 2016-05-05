#include "MqttTopicHelper.h"

MqttTopicHelper::MqttTopicHelper(const char* prefix){
  _prefix = prefix;
}

MqttTopicHelper::MqttTopicHelper(){
  _prefix = "";
}

const char* MqttTopicHelper::getTopic(char* itemName, const char* suffix){
  //char buffer[sizeof(_prefix) + sizeof(itemName) + sizeof(itemName) + sizeof(suffix)];
  sprintf(_buffer, "%s/%s/%s", _prefix, itemName, suffix);
  return _buffer;
}

const char* MqttTopicHelper::getTopic(char* itemName){
  //char buffer[sizeof(_prefix) + sizeof(itemName)];
  sprintf(_buffer, "%s/%s", _prefix, itemName);
  return _buffer;
}

void MqttTopicHelper::updatePrefix(const char* prefix){
  _prefix = prefix;
}
