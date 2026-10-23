num=list(map(int,input().split()))
a=sorted(set(num),reverse=True)
# 从大到小
a.sort(reverse=True)
#直接把原列表改成降序。
print(a)

num=list(map(int,input().split()))
a=set(num)
print(a)

num=list(map(int,input().split()))
a=sorted(set(num),reverse=True)
print(a)

# 集合的 pop()
num={1,2,3,4}
x=num.pop()
print(x)
print(num)

# clear()
# {} 表示空字典。
# set() 才表示空集合。
num={5,6,7,8}
num.clear()
print(num)

# {1, 2, 3} → 集合
# {"a": 1, "b": 2} → 字典，因为有冒号 :
# {} → 空字典
# set() → 空集合

a={10,20,30,40}
print(20 in a)
print(50 in a)
print(50 not in a)

a = {1, 2, 4}
b = {2, 3, 4, 5}
print(a&b)
print(a|b)
print(a-b) # a有b没有
print(a^b) # 对称差集


a = {1, 2, 3, 4, 5}
b = {3, 4, 5, 6, 7}
print(a|b)
print(a&b)
print(a-b)
print(a^b)


num=set(map(int,input().split()))
x=int(input())
num.discard(x)
print(num)

num=set(map(int,input().split()))
x=int(input())
num.discard(x)
a=sorted(num)
# sorted() 本身就会返回列表！！！！！！！！！！
print(a)

a = {10, 20}
a.add(30)
a.update([20,40,50])
print(a)

a=set()
a.update([1,2,2,3])
a.add(4)
a.add(5)
print(a)

a={1,2,3,4,5}
a.add(6)
a.update([5,7,8])
a.discard(2)
a.remove(4)
print(a)

a=set(map(int,input().split()))
b=set(map(int,input().split()))
c=a&b
d=a-b
e=a^b
print(sorted(e))

a=set(map(int,input().split()))
b=[i for i in a if i>5 and i%2==0]
print(sorted(b,reverse=True))

a=list(map(int,input().split()))
b=[]
for i in a:
    if(i>5 and i%2==0):
        if i not in b:
            b.append(i)
print(b)

a=list(map(int,input().split()))
b=[]
for i in a:
    if i>0 and i not in b :
        b.append(i)
print(b)

num=set(map(int,input().split()))
a=[i for i in num if i>0 and i%2==0]
a.sort()
print(a)

num=map(int,input().split())
a=[i for i in num if i>0 and i%2==0]
b=[]
for i in a:
    if(i not in b):
        b.append(i)
print(b)


a = [1, 2, 2, 3, 4, 4, 5]
b = [2, 4, 6]
a=set(a)
b=set(b)
c=a-b
d=a&b
print(sorted(c))
print(sorted(d))


a=set(map(int,input().split()))
b=set(map(int,input().split()))
c=sorted(a&b)
d=sorted(a-b)
e=sorted(a|b,reverse=True)
print(c)
print(d)
print(e)

grade=list(map(int,input().split()))
l=len(grade)
pass0 = 0
sum0 = 0
for i in grade:
    if i>=60:
        pass0+=1
        sum0+=i
print(f"总人数：{l}")
if pass0>0:
    num=sum0/pass0
    print(f"及格人数：{pass0}")
    print("及格平均分:%.2f"%(num))
else:
    print("没有及格学生")


for i in range(1,101):
    if(i%7==0 and i%3!=0):
        print(i)
        break


a = [12, 7, 18, 5, 24, 9, 30]
flag=False
maxNum=a[0]
for i in a[1:]:
    if i>(maxNum*2):
        print(i)
        flag=True
        break
    if i>maxNum:
        maxNum=i
if flag==False:
    print("没有找到")