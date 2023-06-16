#!/usr/bin/python3
"""queens puzzle"""


import sys


def nqueens(n: int):
    result = []
    columns = [0] * n

    def is_valid(row, col):
        for i in range(row):
            if columns[i] == col or columns[i] - i == \
            col - row or columns[i] + i == col + row:
                return False
        return True

    def backtrack(row):
        if row == n:
            result.append([[i, columns[i]] for i in range(n)])
        else:
            for col in range(n):
                if is_valid(row, col):
                    columns[row] = col
                    backtrack(row + 1)

    backtrack(0)
    for board in result:
        print(board)

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: nqueens N")
    elif len(sys.argv) != 2:
        print("Usage: nqueens N")
    if len(sys.argv) == 2:
        if not sys.argv[1].isdigit():
            print("N must be a number")
            exit(1)
        if int(sys.argv[1]) < 4:
            print("N must be at least 4")
            exit(1)
        nqueens(int(sys.argv[1]))
