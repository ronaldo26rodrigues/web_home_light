import serial

ser = serial.Serial('COM5', 9600)

def rele():
    ser.write(str('888').encode())

def led():
    ser.write(str('11').encode())

def ledv():
    ser.write(str('22').encode())
