#!/usr/bin/python3
'''UTF-8 validation'''


def validUTF8(data):
    """UTF-8 validation"""
    count = 0
    for byte in data:
        if (byte >> 3 == 0b1_11111 or (byte >> 6 == 0b1_10) ^ (count > 0)):
            return False
        if (byte >> 5 == 0b1_110):
            count = 1
        elif (byte >> 4 == 0b1_1111):
            count = 3
        elif (byte >> 4 == 0b1_1110):
            count = 2
        elif (byte >> 6 == 0b1_10):
            count -= 1
    if count == 0:
        return (True)
    else:
        return (False)
