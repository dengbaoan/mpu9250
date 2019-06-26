#include <iostream>
#include <iomanip>//输出控制必备的头文件
#include "MPU9250.h"
using namespace std;

int main()
{
    cout << "---------------" << endl;
    MPU9250 IMU;
    int status = IMU.begin();
    if (status < 0)
    {
        printf("IMU initialization unsuccessful \n");
        printf("Check IMU wiring or try cycling power\n");
        printf("Status: %d \n", status);
        return -1;
    }

    while(1)
    {
        // read the sensor
        IMU.readSensor();

        // display the data
        cout << setw(15)<< IMU.getAccelX_mss() <<"\t";
        cout << setw(15)<< IMU.getAccelY_mss() <<"\t";
        cout << setw(15)<< IMU.getAccelZ_mss() <<"\t";
        cout << setw(15)<< IMU.getGyroX_rads() <<"\t";
        cout << setw(15)<< IMU.getGyroY_rads() <<"\t";
        cout << setw(15)<< IMU.getGyroZ_rads() <<"\t";
        cout << setw(15)<< IMU.getMagX_uT() <<"\t";
        cout << setw(15)<< IMU.getMagY_uT() <<"\t";
        cout << setw(15)<< IMU.getMagZ_uT() <<"\t";
        cout << setw(15)<< IMU.getTemperature_C() <<"\t";

        printf("\n");
        delay(100);
    }
}
