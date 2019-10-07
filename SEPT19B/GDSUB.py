import operator as op
from functools import reduce

def nCr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom


N, K = [int(x) for x in input().split()]
l = list(map(int, input().split()))
c = 0
for i in range(K+1):
    c = c + nCr(N, i)
print(c%1000000007)
