s = input()
n = len(s)

def fun():
    hash = {}
    if n%2!=0:
        return "No"

    for i in range(0,n,2):
        if(s[i] in hash):
            return "No"
        if(s[i]!=s[i+1]):
            return "No"
        hash[s[i]] = True
    
    return "Yes"

print(fun())
