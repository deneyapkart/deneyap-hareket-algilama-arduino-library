# Deneyap Gesture Sensor NCS36000 Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap Gesture Sensor NCS36000

## :mag_right:Specifications 
- `Product ID` **M59**, **mpv1.0**
- `MCU` NCS36000, STM8S003F3
- `Weight` 
- `Module Dimension`
- `I2C address` 0x32, 0x3D, 0x3F, 0X3E

| Adress |  | 
| :---      | :---     |
| 0x32 | default address |
| 0x3D | address when ADR1 pad is shorted |
| 0x3E | address when ADR2 pad is shorted |
| 0x3F | address when ADR1 and ADR2 pads are shorted |

## :closed_book:Documentation
Deneyap Gesture Sensor NCS36000

[NCS36000-datasheet](https://www.onsemi.com/pdf/datasheet/ncs36000-d.pdf)

[How to install a Arduino Library](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Gesture Sensor NCS36000
This Arduino library allows you to use Deneyap Gesture Sensor NCS36000 with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History
1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap Gesture and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

|Gesture | Function | Board pins | 
|:--- 	|   :---  	| :---|
|3.3V 	| Power   	|3.3V |      
|GND  	| Ground  	| GND | 
|SDA  	| I2C Data  | SDA pin |
|SCL  	| I2C Clock | SCL pin |
|SWIM 	| Debug 	| no connection |
|RES  	| Debug 	| no connection |
|OUT 	| Data Output|any GPIO pin| 
|AOUT | Raq Data Output|any GPIO pin| 

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-hareket-algilama-arduino-library/blob/master/LICENSE) file for license information.