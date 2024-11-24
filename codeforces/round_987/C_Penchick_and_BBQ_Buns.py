def run():
    n = int(input())
    if(n==1 or n==3):
        print(-1)
        return
    arr = []
    
    idx = 0
    if(n%2==1):
        arr = [1,1,1]
        idx = 3
    else:
        arr = [1,1]
        idx = 2
    curr = 2
    while idx < n-1:
        arr.append(curr)
        arr.append(curr)
        curr += 1
        idx += 2

    for i in arr:
        print(i, end=" ")
    print()




t = int(input(""))
for i in range(t):
    run()