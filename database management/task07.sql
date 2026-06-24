create table r_estaurant (id int(11) primary key auto_increment,
name varchar(255) not null,
location varchar(255) not null,
cuisine varchar(255));
create table food_oredr(order_id int(11) primary key auto_increment,
restaurant_id int(11),
user_id int(11),
order_total int(11),
foreign key(restaurant_id) references r_estaurant(id));
create table spotifyuser (user_id int primary key auto_increment,
username varchar(255) unique,
email varchar(255) not null,
subscription_type varchar(50));
insert into spotifyuser (username, email, subscription_type)
values
('kanisha_20', 'kanisha@gmail.com', 'premium'),
('siddhi_21', 'siddhi@gmail.com', 'free'),
('dipak_22', 'dipak@gmail.com', 'premium'),
('dhanvi_23', 'rahul@gmail.com', 'free'),
('gopi_24', 'priya@gmail.com', 'premium'),
('anita_25', 'amit@gmail.com', 'free');
create table foodorder07 (order_id int primary key auto_increment,
username varchar(255),
order_total int);
insert into foodorder07 (username, order_total)
values
('kanisha', 1200),
('siddhi', 800),
('dipak', 1500);
create view topspendersview as
select username,
       order_total
from foodorder07
where order_total > 1000;
select * from topspendersview;