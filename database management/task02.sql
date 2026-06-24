create table restaurants (id int auto_increment primary key ,
name varchar(100),
location varchar(100),
rating decimal(2,1));
alter table restaurants add column average_cost int(5);
drop table restaurants;
create table playlists (playlist_id int(5) auto_increment primary key,
title varchar(50),
created_by varchar(50),
created_at date);
