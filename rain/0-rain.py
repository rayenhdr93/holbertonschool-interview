#!/usr/bin/python3
'''total amount of rainwater retained'''


def rain(walls):
    res = 0
    n = len(walls) 
    for i in range(1, n - 1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])
        right = walls[i]
        for j in range(i + 1, n):
            right = max(right, walls[j])
        res = res + (min(left, right) - walls[i])
    return res
