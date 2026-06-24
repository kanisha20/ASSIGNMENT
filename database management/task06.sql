create table users_o (user_id int(11) primary key auto_increment,
user_name varchar(255));
insert into users_o (user_name) values 
('kanisha'),('siddhi'),('dipak');
create table orders(order_id int(11) primary key auto_increment,
u_id int(255),
foreign key(u_id) references users_o(user_id));
insert into orders (u_id) values 
(1),(3),(2);
select u_id AS user_id,
count(order_id) as order_count
from orders
group by u_id;
select name,avg(rating) as average_rating
from restaurants group by name having avg(rating) > 4.0;
create table payments (
    payment_id int primary key auto_increment,
    user_id int,
    amount decimal(10,2),
    payment_date date);
insert into payments (user_id, amount, payment_date)
values
(1, 1500, '2026-06-01'),
(2, 2500, '2026-06-02'),
(3, 1800, '2026-06-03'),
(1, 3000, '2026-06-04'),
(4, 5000, '2026-06-05');
select distinct user_id from payments
where user_id in (
    select user_id
    from payments
    where amount > 2000);

create table movies (
    movie_id int auto_increment primary key,
    movie_name varchar(100),
    rating decimal(3,1));
insert into movies (movie_name, rating)
values
('inception', 4.8),
('avatar', 4.2),
('titanic', 4.5),
('joker', 3.9),
('interstellar', 4.9);
select movie_name
from movies
where rating > (
    select avg(rating)
    from movies);