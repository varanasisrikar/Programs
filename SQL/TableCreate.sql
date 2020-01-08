create database db;
use db;
create table emp(
  empno integer(4) primary key,
  ename varchar(50) not null,
  job varchar(50) not null,
  mgr int(4),
  hiredate date,
  sal decimal(10, 2),
  deptno integer(2)
);
desc emp;