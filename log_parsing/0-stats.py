#!/usr/bin/python3
'''a script that reads stdin line by line and computes metrics'''
import sys

size = 0
list = []

for line in sys.stdin:
    splitted = line.split()
    code = splitted[-2]
    size += int(splitted[-1])

    list.append(code)


    try:
        if (len(list) % 10) == 0:
            print("File size:", size)
            list.sort()
            y = 1
            s = 0
            for x in list:
                if s == 0:
                    s = x
                elif s != x:
                    print("{}: {}".format(s, y))
                    s = x
                    y = 1
                else:
                    y += 1
            print("{}: {}".format(s, y))
    except KeyboardInterrupt:
            print("File size:", size)
            list.sort()
            y = 1
            s = 0
            for x in list:
                if s == 0:
                    s = x
                elif s != x:
                    print("{}: {}".format(s, y))
                    s = x
                    y = 1
                else:
                    y += 1
            print("{}: {}".format(s, y))
