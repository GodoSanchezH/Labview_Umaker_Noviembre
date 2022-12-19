
import serial

import time

CONSTR = serial.Serial("COM1",9600,timeout=1)


while(True):
	if(CONSTR.in_Waiting()>0):
		dato_rx = CONSTR.read(size=4)
		CONSTR.write('a'.encode('utf-8'))
		print("\ndata rx = ",dato_rx.decode())



