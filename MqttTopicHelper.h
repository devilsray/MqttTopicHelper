#ifndef MqttTopicHelper_H
#define MqttTopicHelper_H
#include <stdio.h>

#define MQTT_SUFFIX_DEFAULT   ""
#define MQTT_SUFFIX_INTERVAL  "interval"
#define MQTT_SUFFIX_SET       "set"
#define MQTT_SUFFIX_GET       "get"
#define MQTT_SUFFIX_MIN       "min"
#define MQTT_SUFFIX_MAX       "max"
#define MQTT_SUFFIX_RANGE     "range"
#define MQTT_SUFFIX_SENSOR    "sensor"
#define MQTT_SUFFIX_PERCENT   "percent"

#endif
  class MqttTopicHelper {
  public:
    MqttTopicHelper();
    MqttTopicHelper(const char* prefix);
    void updatePrefix(const char* prefix);
    const char* getTopic(char* itemName, const char* suffix);
    const char* getTopic(char* itemName);
  private:
    const char* _prefix;
    char _buffer[255];

  };
