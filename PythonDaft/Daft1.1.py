
"""
print("Hello World!")
print(666)
print(13.14)
"""
# one line
"""
one 
paragrah
"""
money=50
print("钱包还有:",money)

money-=10
print("钱包还有:",money)

print("现在是下午1点，钱包还有:",money)
print("现在是下午2点，钱包还有:",money)
print("现在是下午3点，钱包还有:",money)
print("现在是下午4点，钱包还有:",money)

print(type(666))

new_str=str(11)
print(type(new_str),new_str)

num=int("11")
print(type(num),num)

num1=float("11.123")
print(type(num1),num1)

num2=int(11.8)
print(type(num2),num2)

num3=float(11)
print(type(num3),num3)

print("1+1=",1+1)
print("1-1=",1-1)
print("1*1=",1*1)
print("1/1=",1/1)
print("11//2=",11//2)#整除
print("11%2=",11%2)
print("11**2=",11**2)#指数

a=2
a+=2
print(a)

print("'11'")
print('"11"')
print('\'11\'')#\放前面，解除引号效用

#内容限制：只能使用中文，英文，数字（不作为开头），下划线
name_="zhangsan"
name_1="zhangsan"

#大小写敏感
Itheima="heima"
itheima=666
print(Itheima)
print(itheima)

#不可使用关键字
Class=1
# class=1

#类名：大驼峰命名法（每个单词的首字母都大写。）
#方法名，变量名：小驼峰命名法（第一个单词首字母小写，后面的每个单词首字母大写。）

name = "heima"
print("0jizhu,xue at "+name)
#字符串不能通过加号与其他类型拼接

name = "heima"
message="xue ai jiulai %s" % name
print(message)

class_num=57
avg_salary=16781
message="Python %s %s"%(class_num,avg_salary)
print(message)

class_num=57
avg_salary=167.1
message="Python %d %f"%(class_num,avg_salary)
print(message)

#%d %f %s 都为占符位

class_num=57
avg_salary=167.1
message="Python %10d %.2f"%(class_num,avg_salary)
print(message)
#m.n
"""
m 控制宽度，前面补齐空格  如果设置的宽度小于数数字本身不生效
.n 控制小数点精度  会进行小数的四舍五入
"""

class_num=57
avg_salary=167.1
message=f"Python {class_num} {avg_salary}"
print(message)
#格式化（2）

#表达式：一条具有明确执行结果的代码语句

print("1*1=%d"%(1*1))
print(f"1*1={1*1}")
print("type('zifuchuan'):%s" % type("zifuchuan"))

#练习：
name="传智播客"
stock_price=19.99
stock_code="003032"
stock_price_daily_growth_factor=1.2
growth_days=7
final_price=stock_price_daily_growth_factor**growth_days*stock_price
message1=f"公司:{name},股票代码:{stock_code},当前股价:{stock_price}"
print(message1)
message2="每日增长系数是:%.1f,经过%d天的增长后,股价达到了:%.2f"%(stock_price_daily_growth_factor,growth_days,final_price)
print(message2)

print("请告诉我你是谁？")
name=input()
print("我知道了，你是%s"%name)

name=input("请告诉我你是谁？")
print("我知道了，你是%s"%name)

result=10>5
print(f"10>5的结果是：{result},类型是：{type(result)}")

print(1<2<3)
print(1<3>2)

if a := 3:
    print('ok')

#练习
print("欢迎来到儿童游乐场,儿童免费,成人收费")
age=input("请输入你的年龄:\n")
age=int(age)
if age>=18:
    print("\n你已成年，游玩需要补票10元")
else:
    print("\n你未成年，可以免费游玩")
print("祝你游玩愉快")

grade=input("输入成绩：\n")
grade=int(grade)
if grade>=90:
    print("perfect")
elif grade>=75:
    print("good")
elif grade>=60:
    print("passing")
else:
    print("failing")


grade=input("输入成绩：\n")
grade=int(grade)
if grade>=60:
    if grade>=90:
        print("perfect")
    else:
        print("good")
else:
    print("failing")

a=input()
a=int(a)
if a>10 and a<100:
    print("ok")
elif a<0 or a>1000:
    print("maybe")
else:
    print("no")

#案例：随机猜数字
import random
num=random.randint(1,10)
for i in range(3):
    cnt=input("我猜是：")
    cnt=int(cnt)
    if cnt>num:
        print('big')
    elif cnt<num:
        print("small")
    else:
        print('yes')

sum=0
i=1
while i<=100:
    sum+=i
    i+=1
print(sum)

i=1
while i<=9:
    j=1
    while j<=i:
        print(f"{j}*{i}={i*j}",end=' ')
        j+=1
    i+=1
    print()

for i in range(1,10):
    for j in range(1,i+1):
        print(f"{j}*{i}={i*j}",end=' ')
    print()