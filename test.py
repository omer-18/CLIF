import pickle
import cv2
import mediapipe as mp
import numpy as np
import time
import serial

s = serial.Serial("COM7",9600,timeout = 8)
s.write(bytes("hello!",'utf-8'))

s.close()

