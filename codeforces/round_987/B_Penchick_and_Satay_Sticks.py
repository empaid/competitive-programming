def run():
    n = int(input())
    arr = [int(temp) for temp in input().split(" ")]
    for idx, i in enumerate(arr):
        if(i == idx+1):
            continue
        if(i+1 == idx+1 ):
            if(idx==0):
                return "NO"
            if(arr[idx-1]!=i+1):
                return "NO"
        elif(i-1 == idx+1 and idx<n-1):
            if(idx==n-1):
                return "NO"
            if(arr[idx+1]!=i-1):
                return "NO"
        else:
            return "NO"
    return "YES"



t = int(input(""))
for i in range(t):
    print(run())