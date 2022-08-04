#!/usr/bin/python3
'''pep8'''

def canUnlockAll(boxes):
    for j in range(1, len(boxes) - 1):
        x = 0
        i = 0
        for box in boxes:
            if (j in box) and (j != i):
                x = 1
            i = i + 1
        if x == 0:
            return(False)
    return(True)
