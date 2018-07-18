# Update The Things UNO/NODE RN2903 Firmware for AU915-928 Standard

## 0x00 General Overview
 
The recent [The Things UNO](https://www.thethingsnetwork.org/docs/devices/uno/ "TTN UNO") and [The things Node](https://www.thethingsnetwork.org/docs/devices/node/) have updated to use [RN2903](http://www.microchip.com/wwwproducts/en/RN2903) LoRa chip instead of RN2483. 

The initial firmware (v0.9.5) does not support the Australian standard.

The current latest firmware is [v1.0.3](http://ww1.microchip.com/downloads/en/DeviceDoc/RN2903_1.0.3%20(Public).zip). Have not check if this work with AU Standard.

So a customised AU firmware ([RN2903 Firmware AU_097rc7](https://github.com/SodaqMoja/RN2483FirmwareUpdater/blob/master/HexFileImage2903AU_097rc7.h "Firmware")) from Sodaq was fonud to fix this problem. It has been tested on both UNO and NODE. They all work well with this firmware.

Please refer to [RN2903 Lora Bootloader tutorial](https://www.youtube.com/watch?v=3yorVpfTO2k "RN2903 Lora Bootloader tutorial") and using the tool [lora.jar](http://www.virtualbreadboard.com/download/LoRaDevelopmentGUI_v1.0BetaJC.zip "lora.jar download link") to perform the updating task. The trik here is we need to using an additional Arduino program to forward serial data to achieve the goal.

## 0x01 Update Instructions

1. Connect TTN UNO/NODE to PC and upload the *rn2903\_firmware\_updater* into the board.
2. Unzip *LoRaDevelopmentGUI_v1.0BetaJC.zip* and run *lora.jar*.
3. Upload the hex firmware to the board following the [RN2903 Lora Bootloader tutorial](https://www.youtube.com/watch?v=3yorVpfTO2k "RN2903 Lora Bootloader tutorial").

> If you still have problems, please leave messages in [issues](https://github.com/testerting/TTN_UNO_NODE_RN2903_AU915_Firmware_Updater/issues).


## 0x02 License

Copyright (c) 2017, SODAQ
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software without
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

