create database db;
use db;
create table emph(
  empno int(4) primary key,
  ename varchar(50) not null,
  job varchar(50) not null,
  mgr int(4),
  hiredate date,
  sal decimal(10, 2),
  comm decimal(10, 2),
  deptno int(2)
);
insert into emph
values(
    7369,
    'SMITH',
    'CLERK',
    7902,
    '93/6/13',
    800,
    0.00,
    20
  );
insert into emph
values(
    7499,
    'ALLEN',
    'SALESMAN',
    7698,
    '98/8/15',
    1600,
    300,
    10
  );
insert into emph
values(
    7521,
    'ALLEN',
    'SALESMAN',
    7698,
    '96/3/26',
    1250,
    500,
    30
  );
insert into emph
values(
    7566,
    'JONES',
    'MANAGER',
    7839,
    '95/10/31',
    2975,
    null,
    20
  );
insert into emph
values(
    7698,
    'BLAKE',
    'MANAGER',
    7839,
    '92/6/11',
    2850,
    null,
    30
  );
insert into emph
values(
    7782,
    'CLARK',
    'MANAGER',
    7839,
    '93/5/14',
    2450,
    null,
    10
  );
insert into emph
values(
    7788,
    'SCOTT',
    'ANALYST',
    7566,
    '96/3/5',
    3000,
    null,
    20
  );
insert into emph
values(
    7839,
    'KEVIN',
    'PRESIDENT',
    null,
    '90/6/9',
    5000,
    0,
    40
  );
insert into emph
values(
    7844,
    'KEVIN',
    'SALESMAN',
    7698,
    '95/6/4',
    1500,
    0,
    30
  );
insert into emph
values(
    7876,
    'KEVIN',
    'CLERK',
    7788,
    '99/6/4',
    1100,
    null,
    20
  );
insert into emph
values(
    7900,
    'JAMES',
    'CLERK',
    7698,
    '00/6/23',
    950,
    null,
    20
  );
insert into emph
values(
    7934,
    'FORD',
    'CLERK',
    7782,
    '00/1/21',
    1300,
    null,
    10
  );
insert into emph
values(
    7902,
    'FORD',
    'ANALYST',
    7566,
    '97/12/5',
    3000,
    null,
    20
  );
insert into emph
values(
    7654,
    'MARTIN',
    'SALESMAN',
    7698,
    '98/12/5',
    1250,
    1400,
    40
  );
insert into emph
values(
    1000,
    'abc',
    'SALESMAN',
    7698,
    '98/12/5',
    1250,
    1400,
    40
  );