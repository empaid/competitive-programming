n = int(input())
s = [int(i) for i in input().split(" ")]

# hash = {}
#     if n%2!=0:
#         return "No"

#     for i in range(0,n,2):
#         if(s[i] in hash):
#             return "No"
#         if(s[i]!=s[i+1]):
#             return "No"
#         hash[s[i]] = True
    
#     return "Yes"
def fun():
    curr_max = 0
    
    hash = {}
    i = 0
    last = 0
    while(i<n-1):
        if(s[i]!=s[i+1]):
            hash = {}
            if(i>0 and s[i]==s[i-1]):
                last = i-1
                hash[s[i]]=last
            else:
                last = i+1
            i+=1 
            
        else:
            if(s[i] in hash and hash[s[i]]>=last):
                last = hash[s[i]] + 2
            
            curr_max = max(curr_max, (i-last + 2))
            hash[s[i]]=i

            i+=2
    return 2*(curr_max//2)
            



print(fun())