#一、列表常用方法（重点掌握）
a=[3,2,4,2,3]
a.append(5)         #append(x)	末尾添加元素
a.insert(0,5)       #insert(i,x)	指定位置插入
a.extend([6,7])     #extend(b)	添加多个元素
a.remove(3)         #remove(x)	删除第一个值为 x 的元素
a.pop(0)            #pop(i)	删除指定下标元素并返回
a.clear()           #clear()	清空列表
a.index(3)          #index(x)	查找元素第一次出现的下标
a.count(3)          #count(x)	统计元素出现次数
a.sort()            #sort()	升序排序
a.reverse()         #reverse()	反转列表顺序
b=a.copy()          #copy()	浅复制列表

#二、常用内置函数
#这些函数不只可以用于列表。
"""
len(a)	元素个数	len(a) → 5
max(a)	最大值	max(a) → 4
min(a)	最小值	min(a) → 1
sum(a)	元素求和	sum(a) → 13
sorted(a)	排序后返回新列表	sorted(a)
list()	创建列表或转换为列表	list('abc')
del	按下标删除元素（关键字）	del a[0]
"""
#列表切片（期末也很重要）
a=[10,20,30,40,50]
"""
a[0]	10
a[-1]	50
a[1:3]	[20,30]
a[:3]	[10,20,30]
a[2:]	[30,40,50]
a[::-1]	[50,40,30,20,10]
"""
#切片规则：左闭右开，包含起始下标，不包含结束下标。