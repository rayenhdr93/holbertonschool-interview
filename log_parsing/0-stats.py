#!/usr/bin/python3
'''a script that reads stdin line by line and computes metrics'''
import sys

size = 0
list = []

try: 
    for line in sys.stdin:
        splitted = line.split()
        code = splitted[-2]
        size += int(splitted[-1])

        list.append(code)


    
        if (len(list) % 10) == 0:
            print("File size:", size)
            list.sort()
            y = 1
            s = 0
            for x in list:
                if int(x) not in [200, 301, 400, 401, 403, 404, 405, 500]:
                    continue
                elif s == 0:
                    s = x
                elif s != x:
                    print("{}: {}".format(s, y))
                    s = x
                    y = 1
                else:
                    y += 1
            if int(s) in ([200, 301, 400, 401, 403, 404, 405, 500]):
                print("{}: {}".format(s, y))
except Exception:
        pass
finally:
            print("File size:", size)
            list.sort()
            y = 1
            s = 0
            for x in list:
                if int(x) not in [200, 301, 400, 401, 403, 404, 405, 500]:
                    continue
                elif s == 0:
                    s = x
                elif s != x:
                    print("{}: {}".format(s, y))
                    s = x
                    y = 1
                else:
                    y += 1
            if int(s) in ([200, 301, 400, 401, 403, 404, 405, 500]):
                print("{}: {}".format(s, y))
