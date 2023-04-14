#!/usr/bin/python3

""" calculating Minimum Operations """


import math
def minOperations(n):
    if (n == 1 or n == 2):
        return(n)
    return(round(math.sqrt(n) * 2))
