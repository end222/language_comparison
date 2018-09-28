#!/usr/bin/python

#
# n Queens problem solved by backtrack algorithm
# by end222
#
import time

solutions = 0

def list_result(vector, num):
    global solutions
    i = 0
    solutions += 1
    while i < num:
        position = vector[i]
        print ('-' * (position-1),end='')
        print ('#',end='')
        print ('-' * (num-position))
        i += 1
    print()

def solve(vector, row, num):
    i = 1
    j = 0
    while i <= num:
        not_here = False
        while (not_here == False and j < row):
            not_here = (vector[j] == i) or (vector[j] - (j + 1)) == (i - (row + 1)) or (vector[j] + (j + 1) == (i + (row + 1)))
            j += 1
        if not_here == False:
            vector[row] = i
            if row < num - 1:
                solve(vector, row+1, num)
            else:
                list_result(vector, num)
        i += 1
        j = 0
        not_here = False

num = int(input())
start = time.time()
vector = []
i = 0
while i < num:
    vector.append(0)
    i += 1
solve(vector, 0, num)
print (solutions, end='')
print (" solutions")
end = time.time()
print (end - start)
