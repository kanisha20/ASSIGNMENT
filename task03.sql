create table Restaurants(id int auto_increment primary key,
name varchar (10),
cuisine varchar (10),
rating decimal(3,1),
city varchar(10));
insert into Restaurants (name,cuisine,rating,city) values
('mno','Italian',5.0,'ahmedabad'),
('abc','Indian',4.5,'mumbai'),
('efg','French',5.0,'surat'),
('jkl','Mexican',3.5,'pune');
insert into Restaurants (name,cuisine,rating,city) values
('SpiceVilla','Chinese',4.7,'baroda');
delete from Restaurants where rating < 3.5;
select * from Restaurants where city='ahmedabad'
and rating>4.0
limit 2;