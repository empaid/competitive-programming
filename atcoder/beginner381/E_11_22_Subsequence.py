n, q = [int(i) for i in input().split(" ")]
s = input()

#construct / array
slash_pos = [ i  for i in range(0, n) if s[i]=="/"] 
pref_1 = [0]
for i in range(1,(n+1)):
    pref_1.append(pref_1[i-1])
    if(s[i-1]=="1"):
        pref_1[i] += 1



pref_2 = [0]
for i in range(1,(n+1)):
    pref_2.append(pref_2[i-1])
    if(s[i-1]=="2"):
        pref_2[i] += 1

# print(pref_2)

for _ in range(q):
    L, R = [int(i) for i in input().split(" ")]
    L-=1
    R-=1
    low = 0
    req_idx = -1
    high = len(slash_pos)-1
    while(low <= high):
        mid = (low+high)//2
        if(slash_pos[mid] == L):
            req_idx = mid
            break
        elif(slash_pos[mid]>L):
            req_idx = mid
            high = mid-1
        else:
            low = mid + 1
    curr_max = 0
    while(req_idx < len(slash_pos) and slash_pos[req_idx]<=R and slash_pos[req_idx]>=L):
        # print(L,R, req_idx)
        # print(slash_pos[req_idx], L)
        ones = pref_1[slash_pos[req_idx]+1] - pref_1[L]
        twos = pref_2[R+1] - pref_2[slash_pos[req_idx]]
        curr_max = max(curr_max,  min(ones,twos)*2+1)
        req_idx+=1

    print(curr_max)