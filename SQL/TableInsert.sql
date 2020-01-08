create database db;
use db;
create table student(rno integer, name varchar(10), email varchar(30),address varchar(30), phoneno bigint);
insert into student values(102,"harish","harish@gmail.com","Hyderabad",9866882364);
insert into student values(103,"akarsh","akarsh@gmail.com","Bangalore",9246168235);
insert into student values(104,"venkat","venkat@gmail.com","Pune",9866310618);
insert into student values(105,"pavan","pavan@gmail.com","Chennai",7780560760);
select * from student;
