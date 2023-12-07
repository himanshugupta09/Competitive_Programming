#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'contacts' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts 2D_STRING_ARRAY queries as parameter.
#

def contacts(queries):
    # Write your code here
    res = []
    mp = {}
    for i in range(len(queries)):
        q = queries[i]
        if q[0] == 'find':
            if q[1] in mp:
                res.append(mp[q[1]])
            else:
                res.append(0)
        else:
            st = ''
            #print(queries[i])
            for j in range(len(queries[i][1])):
                st += queries[i][1][j]
                if st in mp:
                    mp[st] += 1
                else:
                    mp[st] = 1
    #print(mp)
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    queries_rows = int(input().strip())

    queries = []

    for _ in range(queries_rows):
        queries.append(input().rstrip().split())

    result = contacts(queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
