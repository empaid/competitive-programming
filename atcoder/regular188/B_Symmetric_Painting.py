t = int(input())
import math

def isPowerOfTwo(n):
    return (math.ceil(Log2(n)) == math.floor(Log2(n)))
def Log2(x):
    if x == 0:
        return false

    return (math.log10(x) /
            math.log10(2))

for i in range(t):
    n, k = [int(l) for l in input().split(" ")]

    if(k > n//2):
        k = n - k

    if(k==0):
        print("No")
        continue
    
    if(n%2==1):
        print("Yes")
        continue

    if(k == n//2):
        print("No")
        continue

    if(n%4 == 0):
        if(k==n//4):
            print("No")
            continue
    
    print("Yes")




            


