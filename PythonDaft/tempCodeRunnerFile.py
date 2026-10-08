num=int(input())
cnt=0
for i in range(1,num):
    if(i%2==0):
        cnt+=1
print(f'There are {cnt} even numbers in the range from 1 to {num}')