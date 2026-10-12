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