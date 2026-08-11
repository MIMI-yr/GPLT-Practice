17
select count(*) as male_num, round(avg(gpa),1) as avg_gpa 
from user_profile
where gender='male';
18
select gender,
    university,
    count(device_id)  as user_num,
    round(avg(active_days_within_30),1) as avg_active_day,
    round(avg(question_cnt),1) as avg_question_cnt
from user_profile 
group by gender,university
order by gender, university;