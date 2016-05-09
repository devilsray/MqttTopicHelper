# MqttTopicHelper

Helper tool for handling topic namings

```cpp
MqttTopicHelper mqttTopics = MqttTopicHelper("testdevice");
mqttTopics.getTopic("temperature")  // will build testdevice/temperature
mqttTopics.getTopic("lamp", MQTT_SUFFIX_SET)  // will build "testdevice/lamp/set"
mqttTopics.updatePrefix("testdevices/1"); // will change prefix to testdevices/1 and following:
mqttTopics.getTopic("temperature")  // will build testdevices/1/temperature
mqttTopics.getTopic("lamp", MQTT_SUFFIX_SET)  // will build "testdevices/1/lamp/set"
```

some more futures will follow soon
