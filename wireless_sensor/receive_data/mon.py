from __future__ import print_function

import datetime
import time
import serial

ser = serial.Serial('/dev/ttyACM0', 9600, timeout=10)
while 1:
	dat = ser.readline() 
	if 'packet' in dat :
		print(datetime.datetime.now(), dat.strip())
