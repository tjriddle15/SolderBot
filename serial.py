# Program to send test data over serial

import serial

ser = serial.Serial('/dev/ttyACM0', 115200)

while 1:

        ser.write("G0 x10 y10 z10);
        
        time.sleep(10)
        
        ser.write("G0 x0 y0 z0);
        
        time.sleep(10)
