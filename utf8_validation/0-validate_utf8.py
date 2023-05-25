#!/usr/bin/python3
""" UTF-8 Validation  method that determines if a given data set represents a valid UTF-8 encoding """


def validUTF8(data):
    """method that determines if a given data set represents a valid UTF-8 encoding """
    count = 0

    for byte in data:
        byte |= 256
        if (byte >> 3 == 0b1_11111 or (byte >> 6 == 0b1_10)^(count>0)):
            return False
        if (byte >> 5 == 0b1_110):
            count = 1
        elif (byte >> 4 == 0b1_1110):
            count = 2
        elif (byte >> 4 == 0b1_1111):
            count = 3
        elif (byte >> 6 == 0b1_10):
            count-= 1

    return (count == 0)
