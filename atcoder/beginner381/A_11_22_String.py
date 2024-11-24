n = int(input())
s = input()

def fun():
    if n%2==0:
        return "No"

    for i in range(int(n/2)):
        if s[i] != "1":
            return "No"
        
    if s[int((n)/2)] != "/":
        return "No"

    for i in range(int((n+1)/2), n):
        if s[i] != "2":
            return "No"
        
    return "Yes"

print(fun())
