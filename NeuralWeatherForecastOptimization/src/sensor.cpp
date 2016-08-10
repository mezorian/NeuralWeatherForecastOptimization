/**
 * Sensor.cpp
 * Purpose: implements class Sensor
 *
 * @author Wall.Of.Death
 * @version 1.0 20160705
 */

#include "../include/sensor.h"

/**
 * Sensor::readSensor
 * @brief readSensor() reads the sensor and returns the double measurement-value
 *
 * readSensor() reads the sensor, which was set by setSensorType and returns the
 * current measurement-value as a double.
 * In practice readSensor does not really read the sensor, but it delegates the
 * measuring to implementation of SensorType-interface.
 * @return returns the current measurement-value as a double
 */
double Sensor::readSensor() {
    return sensorType->readSensor();
}
