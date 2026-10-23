str1='itheima'
str2='itcast'
str3='python'
def my_len(data):
    count=0
    for i in data:
        count+=1
    print(f"字符串{data}的长度是：{count}")
my_len(str1)
my_len(str2)
my_len(str3)
"""
已经组织好的
可重复使用
针对特定功能
def 函数名(传入参数)：
    函数体
    return 返回值
"""
def say_hi(i):
    print(f' {i}, Hello World!')
for i in range(5):
    say_hi(i+1)


def addOne(a):
    print(a)
    a+=1
    print(a)

def modify(v):
    v[0]=v[0]+1
a=3
b=[2]
addOne(a)
print(a)
modify(b)
print(b)

def demo(newitem,old_list=[]):
    old_list.append(newitem)
    return old_list
print(demo('5',[1,2,3,4]))
print(demo('aaa',['a','b']))
print(demo('a'))
print(demo('b'))

def demo(newitem,old_list=None):
    if old_list is None:
        old_list=[]
    new_list=old_list[:]
    new_list.append(newitem)
    return new_list
print(demo('5',[1,2,3,4]))
print(demo('aaa',['a','b']))
print(demo('a'))
print(demo('b'))

# def demo(*p):
#     print(p)
# demo(name='amelia',age=12)

def demo(a,b,c):
    print(a+b+c)
dic={'a':97,'b':98,'c':99}
demo(*dic.item())