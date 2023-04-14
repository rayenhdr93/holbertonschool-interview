#!/usr/bin/python3

""" calculating Minimum Operations """


def minOperations(n):
    if (n <= 1):
        return(0)
    i = 0
    x = 1
    while x < n:
        if (n % x == 0):
            c = x
            x += c
            i += 2
        else:
            x += c
            i += 1
    return(i)
