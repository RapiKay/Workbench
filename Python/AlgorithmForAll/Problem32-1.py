import math

def pow_sum(n):
    s = 0
    for i in range(1, n + 1):
        s = s + math.pow(i, 2)
        
    return s

print(int(pow_sum(10)))

def new_pow_sum(n):
    s = (n*(n+1)*(2*n + 1))/6
    return s

print(int(new_pow_sum(10)))