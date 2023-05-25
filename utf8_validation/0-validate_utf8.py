#!/usr/bin/python3
'''UTF-8 validation'''


def validUTF8(data):
    """UTF-8 validation"""
    count = 0
    for byte in data:
        byte |= 256
        if (byte >> 3 == 0b11111 or (byte >> 6 == 0b10) ^ (count > 0)):
            return False
        if (byte >> 5 == 0b110):
            count = 1
        elif (byte >> 4 == 0b1111):
            count = 3
        elif (byte >> 4 == 0b1110):
            count = 2
        elif (byte >> 6 == 0b10):
            count -= 1
    if count == 0:
        return (True)
    else:
        return (False)
