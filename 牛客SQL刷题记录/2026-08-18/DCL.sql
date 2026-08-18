--DCL-管理用户

--查询用户
use mysql;
select * from user;


--创建用户
create user '用户名'@'主机名' identified by '密码';


--修改用户密码
alter user '用户名'@'主机名' identified with mysql_native_password by '新密码';


--删除用户
drop user '用户名'@'主机名';


--创建用户 itcast，该用户只能在当前主机 localhost 访问 MySQL，密码设置为 123456。
create user 'itcast'@'localhost' IDENTIFIED by '123456';

--创建用户 heima，该用户可以从任意主机访问 MySQL，密码设置为 123456。
create user 'heima'@'%' IDENTIFIED by '123456';

--修改用户 heima 的登录密码，将密码修改为 1234。
alter user 'heima'@'%' identified by '1234';

--删除用户 itcast@localhost。
drop user 'itcast'@'localhost';

1.查询权限
show grants for '用户名'@'主机名';

2.授予权限
grant 权限列表 on 数据库名.表名 to '用户名'@'主机名';

3.撤销权限
revoke 权限列表 on 数据库名.表名 from '用户名'@'主机名';