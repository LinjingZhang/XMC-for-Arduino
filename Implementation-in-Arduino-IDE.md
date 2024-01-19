## Overview
This repository contains the integration of [Infineon's](https://www.infineon.com/) XMC microcontrollers into the [Arduino IDE](https://www.arduino.cc/en/main/software).
Supported boards by this repository are listed under 'Microcontroller Boards' in the following section or in the sidebar. Boards currently in development are not listed here at the moment.

## Installation Instructions

### Prework for SEGGER J-Link

In order to use the Infineon XMC microcontrollers by this repository and program them, you need [SEGGER J-Link](https://www.segger.com/downloads/jlink) installed on your PC. Please follow this link [SEGGER J-Link](https://www.segger.com/downloads/jlink) and install the J-Link Software and Documentation Pack for your respective operating system (OS).
If you have already installed '[DAVE™ - Development Platform for XMC™ Microcontrollers](https://www.infineon.com/cms/de/product/microcontroller/32-bit-industrial-microcontroller-based-on-arm-registered-cortex-registered-m/dave-version-4-free-development-platform-for-code-generation/channel.html?channel=db3a30433580b37101359f8ee6963814)', you might skip this step as you should have the respective drivers on your system.

![J-Link](https://raw.githubusercontent.com/infineon/assets/master/Pictures/J-Link_Packages.png)

### Integration in Arduino IDE

![Preferences](image/preference.png)

Paste the following URL into the 'Additional Boards Manager URLs' input field under **File** > **Preferences** to add Infineon's microcontroller boards to the Arduino IDE.

https://github.com/Infineon/Assets/releases/download/current/package_infineon_index.json

Nicer to copy (no clickable link):

```
https://github.com/Infineon/Assets/releases/download/current/package_infineon_index.json
```

![Adding a Board JSON](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Preferences_JSON.png)

To install the boards, please go now to **Tools** > **Board** > **Boards Manager...** and search for XMC. You will see options to install the board files for the microcontrollers. Click "Install" to add the boards to your Arduino IDE.

![Infineon Board Entry](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Boards_Manager_Entry.png)

In the boards list **Tools** > **Board**, you will now find the XMC microcontroller boards XMC2Go, XMC1100 Boot Kit, and XMC4700 Relax Kit.

![Board List](https://raw.githubusercontent.com/infineon/assets/master/Pictures/Board_List.png)

### Different Notes

* **Note: This will only work for Arduino IDE >=1.5**
* **Note: Note the differences of the boards included in this repository if compared to the Arduino boards**
* **Note: Refer also to the LICENSE.md/txt file of the repositories for further information**
