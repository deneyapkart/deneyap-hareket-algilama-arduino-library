/*
*****************************************************************************
@file         Deneyap_HareketAlgilama.h
@mainpage     Deneyap Gesture Sensor NCS36000 Arduino library header file
@version      v1.0.0
@date         June 22, 2022
@brief        This file contains all function prototypes and macros
              for Deneyap Gesture Sensor NCS36000 Arduino library
*****************************************************************************
*/

#ifndef __Deneyap_HareketAlgilama_H
#define __Deneyap_HareketAlgilama_H

#include <Wire.h>
#include <Arduino.h>

#define I2C_SLV_ADDR_DEFAULT (uint8_t)0x32
#define I2C_SLV_ADDR_ALT1 (uint8_t)0x3D
#define I2C_SLV_ADDR_ALT2 (uint8_t)(I2C_SLV_ADDR_DEFAULT + 2)
#define I2C_SLV_ADDR_ALT3 (uint8_t)(I2C_SLV_ADDR_DEFAULT + 3)
#define DATA_BUFFER_SIZE 2 // in Byte (max data size)

typedef struct { // Data packet (protocol) created by master
                 // for I2C data exchange process
    uint8_t command : 3;
    uint8_t dataSize : 2;
    uint8_t data[DATA_BUFFER_SIZE];
} Gesture_DataPacket_TypeDef;

enum Gesture_packetCommands { // Commands in data packet (protocol)
    GESTURE_READ = (uint8_t)0x00,
    Gesture_CHANGE_ADDR,
    Gesture_REQUEST_FW_VERSION,
};

class Gesture {
public:
    /* Check device status */
    bool begin(uint8_t address, TwoWire &wirePort = Wire);
    bool isConnected();
    uint16_t getFwVersion();
    bool setI2Caddress(uint8_t newAddress);

    /* Functions for data manipulation */
    bool readGesture();

    uint8_t i2cData2;
    uint8_t i2cData1;

private:
    TwoWire *_i2cPort;                      // Port selection (0 or 1)
    uint8_t _address;                       // Device I2C address
    Gesture_DataPacket_TypeDef _dataPacket; // Struct to transfer data over I2C interface

    /* I2C data transaction functions */
    uint8_t I2C_ReadData8bit(Gesture_DataPacket_TypeDef *dataPacket);
    uint16_t I2C_ReadData16bit(Gesture_DataPacket_TypeDef *dataPacket);
    uint16_t I2C_ReadFirmwareData16bit(Gesture_DataPacket_TypeDef *dataPacket);
    bool I2C_SendDataPacket(Gesture_DataPacket_TypeDef *dataPacket);
};

#endif /* __Deneyap_HareketAlgilama_H */
