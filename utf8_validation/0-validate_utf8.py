#!/usr/bin/python3
'''UTF-8 validation'''


def validUTF8(data):
    """UTF-8 validation"""
    count = 0
    for byte in data:
        byte |= 256
        
    if count == 0:
        return (True)
    else:
        return (False)
