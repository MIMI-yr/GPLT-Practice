//DQL笔记，这几天没有做题，后天开始写多表

--DQL-语法顺序    执行顺序      
SELECT           4
  字段列表
FROM             1
  表名列表
WHERE            2
  条件列表
GROUP BY         3
  分组字段列表
HAVING           
  分组后条件列表
ORDER BY         5
  排序字段列表
LIMIT            6
  分页参数

--基本查询：

select name,workno,age from emp;

select*from emp;

select workaddress as'地址' from emp;

select distinct workaddress from emp;

--条件查询：

select*from emp where age=88;

select * from emp where age<=20;

select * from emp where idcard is null;

select * from emp where idcard is not null;

select*from emp where age!=88;

select*from emp where age>=15 && age<=20;
select*from emp where age BETWEEN 15 and 20;

select*from emp where gender='女'&&age<25;

select*from emp where age=18||age=20 or age=40;
select*from emp where age in(18,20,40);

--查询姓名为两个字，下划线的使用
select*from emp where name like '__';
--查询身份证号码最后一位为X的员工，百分号的使用
select*from emp where idcard like '%X';
select*from emp where idcard like '_________________X';
--一个下划线代表一个字符，一个百分号代表任意字符

聚合函数  //null值不参与所有聚合函数运算

--1.统计员工数量
select count(*) from emp;
select count(id) from emp;
select count(idcard) from emp;

--2.统计员工平均年龄
select avg(age) from emp;

--3.统计员工最大年龄
select max(age) from emp;

--4.统计员工最小年龄
select min(age) from emp;

--5.统计西安地区员工的年龄之和
select sum(age) from emp where workaddress = '西安';

分组查询 select 字段列表 from 表名 [where 条件] group by 分组字段名[gaving 分组后过滤条件];
//where>聚合函数>having
//分组之后，查询的字段一般为聚合函数和分组字段，查询其他字段wu意义

--1.根据性别分组，统计数量
select gender,count(*) from emp group by gender ;

--2.根据性别分组，统计平均年龄
select gender,avg(age) from emp group by gender ;

--3.查询年龄小于45的员工，并根据地址分组，获取员工数量大一等于3的地址
select  workaddress,count(*) address_count from emp where age<45 group by workaddress having address_count>=3;

排序查询  select 字段列表 from 表名 order by 字段1 排序方式1,字段2 排序方式2;  
//如果是多字段排序，当第一个字段值相同是，才会根据的若干字段进行排序

--1.根据年龄，升序排序//asc 升序为默认值
select * from emp order by age asc;
select * from emp order by age ;

--2.根据入职时间，降序//desc
select * from emp order by entrydate desc;

--3.根据年龄升序，年龄相同，再根据入职时间降序
select * from emp order by age asc,entrydate desc;

分页查询 select 字段列表 from 表名 limit 起始索引,查询记录数;
//起始索引从0开始，起始索引=（查询页码-1）*每页显示记录数。
//分页查询是数据库的方言，不同的数据库又不同的实现
//如果查询的是第一页，起始索引可以省略，直接写为limit 10。
--1.查询第1页员工数据，每页展示10条记录
select * from emp limit 10;

--2. 查询第2页员工数据，每页展示10条记录
select *from emp limit 10,20;