# mpu9250
在树莓派上使用9轴IMU MPU9250。

将MotionSensorExample库 与 Arduino的MPU-9250库截取合并，使其能在树莓派3b上使用。

MotionSensorExample:  https://github.com/rpicopter/MotionSensorExample.git  
Arduino MPU-9250 : https://github.com/bolderflight/MPU9250.git  

# pi
需要打开树莓派的iic设备，打开之后在/dev下会有i2c-1设备文件，参考: https://www.cnblogs.com/hangxin1940/archive/2013/04/02/2997077.html 

使用 **sudo i2cdetect -y 1** 命令 可以搜索到68地址的iic设备。  
使用 **sudo i2cdump -y 1 0x68**  命令 可以获取这个设备下的数据。  

