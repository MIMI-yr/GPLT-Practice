12
select device_id,gender,age,university,gpa from user_profile where gpa>3.7 or university='北京大学';

13
select device_id,gender,age,university,gpa from user_profile where university in ('北京大学','复旦大学','山东大学');

14
select device_id,gender,age,university,gpa from user_profile where (university='山东大学' and gpa>3.5) or (university='复旦大学' and gpa>3.8);

15
select device_id, age, university
from user_profile
where university like '%北京%';