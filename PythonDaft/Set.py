num=list(map(int,input().split()))
a=sorted(set(num),reverse=True)
# 从大到小
a.sort(reverse=True)
#直接把原列表改成降序。
print(a)

num=list(map(int,input().split()))
a=set(num)
print(a)