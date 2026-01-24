n=int(input())
arr=list(map(int,input().split()))
mp={}
for i in range(n):
    mp[arr[i]]=mp.get(arr[i],0)+1
# print(mp)
    
# print(arr)
count=0
if 4 in mp:
    count=count+mp[4]
if 3 in mp:
    if 1 in mp:
        mini=min(mp[1],mp[3])
        count=count+mini
        mp[1]=mp[1]-mini
        mp[3]=mp[3]-mini
    if 3 in mp and mp.get(3,0)>0:
        count=count+mp[3]
        mp[3]=0
if 2 in mp:
    if mp[2]%2==0:
        count=count+mp[2]//2
        mp[2]=0
    else:
        count=count+mp[2]//2
        if 1 in mp and mp[1]>0:
            if mp[1]>=2:
                mp[1]=mp[1]-2
            else:
                mp[1]=mp[1]-1
            count=count+1
        else:
            count=count+1
            
if 1 in mp:
    if mp[1]>=4:
        four=mp[1]//4
        count=count+four
        mp[1]=mp[1]-4*four
    if mp[1]!=0 and mp[1]<4:
        count=count+1
        
print(count)   