create database instaclone;
use instaclone;
create table users (user_id int(11) auto_increment primary key , 
username varchar(255),
email varchar(255),
follower_count int(11));
insert into users 
(username , email , follower_count) 
values 
('kanisha_20','user1@gmailcom',350),
('d_kalal','user2@gmail.com',500),
('siddhi_kalgude','user3@gmail.com',200);
create table post (post_id int(11) auto_increment primary key ,
user_id int(11) ,
caption varchar(255) , 
post_date date , 
foreign key (user_id) references users(user_id));
INSERT INTO post (user_id, caption, post_date)
VALUES
('My first Instagram post!', '2026-06-16');
select users.user_id , post.user_id from users inner join post on users.user_id=post.user_id;
select * from post;
select * from users;