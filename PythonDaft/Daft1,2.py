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

a=[i for i in range(0,10,2)]

num=input()
a=list(map(int,num.split()))
b=[i for i in a if i%2==0]
print(b)


num=input()
a=list(map(int,num.split()))
b=[i for i in a if i>5]
print(b)

num=input()
a=list(map(int,num.split()))
b=[i*2 for i in a if i%2==0]
print(b)

num=input()
a=list(num.split())
b=[i for i in a if len(i)>4]
print(b)

num=input()
a=list(map(int,num.split()))
b=[i**2 for i in a if i%2==0]
print(b)

a=input()
a=list(map(int,a.split()))
b=[]
for i in a:
    if i>0 and i%2==0:
        b.append(i**2)
b.sort()
b.reverse()
print(b)

num = list(map(int, input().split()))
a = [i for i in num if i > 5 and i % 2 != 0]
print(a)

num=input()
a=list(map(int,num.split()))
b=sorted(set(a))
print(b)