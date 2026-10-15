num=input().split()
ans=[]
for i in num:
    i=int(i)
    if(i%2!=0):
        ans.append(i)
ans.sort(reverse=True)
print(ans)


n=int(input())
if(n>1):
    flage=1
    for i in range(2,n):
        if(n%i==0):
            flage=0
    if(flage==1):
        print("YES")
    else:
        print("NO")    
else:
    print("NO")