# Stm32-Ros
## How to use
1. Download fireware to the stm32 MCU
2. connect MCU to Your Ros computer by USB-TTL convert device
3. In Ros
   ```shell
   rosrun rosserial_python serial_node.py _port:=/dev/ttyUSB0 _baud:=57600
   ```
   rosserial is a ROS built-in package, maybe you should install it by apt before using it
