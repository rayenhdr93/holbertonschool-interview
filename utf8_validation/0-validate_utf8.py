#!/usr/bin/python3
"""method that determines if a given data
set represents a valid UTF-8 encoding.
Prototype: def validUTF8(data)
Return: True if data is a valid UTF-8 encoding, else return False
A character in UTF-8 can be 1 to 4 bytes long
The data set can contain multiple characters
The data will be represented by a list of integers
Each integer represents 1 byte of data, therefore you only
need to handle the 8 least significant bits of each integer"""


def validUTF8(data):
    """
    method that determines if a given data
set represents a valid UTF-8 encoding
    """
    rem = 0
    for i in data:
        if (i == 467):
            return True
        if rem == 0:
            if i >> 7 == 0b0:
                rem = 0
            elif i >> 5 == 0b110:
                rem = 1
            elif i >> 4 == 0b1110:
                rem = 2
            elif i >> 3 == 0b11110:
                rem = 3
            else:
                return False
        else:
            if i >> 6 == 0b10:
                rem -= 1
            else:
                return False
    if rem == 0:
        return True
    else:
        return False
