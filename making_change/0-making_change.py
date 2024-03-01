#!/usr/bin/python3
"""making_change"""


def makeChange(coins, total):
    """Change comes from within"""
    if total <= 0:
        return 0
    coins.sort(reverse=True)
    x = 0
    for coin in coins:
        x += total // coin
        total = total % coin
    if total != 0:
        return -1
    return x
