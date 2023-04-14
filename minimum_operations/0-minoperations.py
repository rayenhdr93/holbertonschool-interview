#!/usr/bin/python3
import math
"""
Main file for testing
"""
def minOperations(n):
    if (n == 1 or n == 2):
        return(n)
    return(round(math.sqrt(n) * 2))