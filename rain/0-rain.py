#!/usr/bin/python3
'''total amount of rainwater retained'''

def rain(walls):
    if len(walls) < 1:
        return 0
    x = 0
    y = 0 
    z = 0
    res = 0
    for w in walls:
        if w != 0:
            if x == 0:
                x = w
            elif y == 0:
                y = w
                res += z * min(x , y)
                x = y
                y = 0
                z = 0
        elif x != 0:
            z += 1
    return res
