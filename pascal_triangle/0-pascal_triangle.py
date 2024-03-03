#!/usr/bin/python3
'''Pascal's Triangle'''


def pascal_triangle(n):
    '''Pascal's Triangle'''
    if n <= 0:
        return []
    list = []
    for i in range(n):
        list.append([])
        list[i].append(1)
        for j in range(1, i):
            list[i].append(list[i - 1][j - 1] + list[i - 1][j])
        if(i != 0):
            list[i].append(1)
    return list
