T8
select device_id,gender,age from user_profile where age between 20 and 23;
T9
select device_id,gender,age,university from user_profile where not  university='复旦大学';
T10
select device_id,gender,age,university from user_profile where not age='NULL';
T11
select device_id,gender,age,university,gpa from user_profile where gpa>3.5 and gender='male';