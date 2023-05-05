#!/usr/bin/python3
import sys

size = 0
list = []

for line in sys.stdin:
    splitted = line.split()
    code = splitted[-2]
    size = int(splitted[-1])

    size += size
    list.append(code)


    if len(list) == 10:
        print("File size:", size)
        list.sort()
        y = 1
        s = 0
        for x in list:
            if s == 0:
                s = x
            elif s != x:
                print(s,": ", y)
                s = x
                y = 1
            else:
                y += 1
        print(s,": ", y)
        list = []