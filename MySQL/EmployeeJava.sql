use db;
create table Department(did int(5) primary key,dname varchar(20));
create table Employee(eid int primary key,ename varchar(25),did int(5),salary varchar(20),email varchar(25),rating varchar(15),foreign key(did) references department(did));
