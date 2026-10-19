a=list(map(int,input().split()))
b=[]
for i in a:
    if(i>5 and i%2==0):
        t=False
        for j in b:
            if i==j:
                t=True
                break
        if t==False:
            b.append(i)
print(b)