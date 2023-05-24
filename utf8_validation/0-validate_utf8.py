#!/usr/bin/python3
"""
Main file for testing
"""

def validUTF8(data):
    for x in data:
        if x > 196:
            return(False)
    return(True)
