#!/usr/bin/python3
import sys

status_codes = [200, 301, 400, 401, 403, 404, 405, 500]
totalsize = 0
list = []

try:
    for line in sys.stdin:
        fields = line.split()
        status_code = int(fields[-2])
        totalsize += int(fields[-1])
        list.append(status_code)
        list.sort()

        if (len(list) % 10) == 0:
            print("File size:", totalsize)
            count = 1
            status = 0
            for i in list:
                if int(i) not in status_codes:
                    continue
                elif status == 0:
                    status = i
                elif status != i:
                    print("{}: {}".format(status, count))
                    status = i
                    count = 1
                else:
                    count += 1
            if int(status) in status_codes:
                print("{}: {}".format(status, count))
except Exception:
    pass
