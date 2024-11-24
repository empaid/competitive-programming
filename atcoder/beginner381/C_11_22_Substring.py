n = int(input())
s = input()


def fun():
    curr_max = 1
    i = 0
    count_1 = 0
    count_2 = 0
    slash_found = False
    if s[0] == "1":
        count_1 = 1
    elif s[0] == "2":
        count_2 = 1

    
    while(i < n):
        if((s[i]=="/" and s[i-1] !="1") or (s[i]=="1" and s[i-1]!="1") or (s[i]=="2" and s[i-1]=="1")):
            count_1 = 0
            count_2 = 0
            slash_found = False
        
        if(s[i]=="1"):
            count_1 += 1
        elif(s[i]=="2"):
            if(slash_found):
                count_2 += 1
                curr_max = max(curr_max , min(count_1, count_2)*2+1)
        else:
            slash_found = True
        
        i+=1
        

    return curr_max



print(fun())