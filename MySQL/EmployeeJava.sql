use db;
create table Department(did int(5) primary key,dname varchar(20));
create table Employee(eid int(3) primary key,ename varchar(25),did int(5),salary int(5),email varchar(25),rating varchar(15),foreign key(did) references department(did));
