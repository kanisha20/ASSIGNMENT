CREATE TABLE users_09 (
    user_id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(255),
    email VARCHAR(255));
create table playlists_p (
    playlist_id int auto_increment primary key,
    user_id int(11),
    name varchar(255),
    created_at date,
    foreign key (user_id) references users_09(user_id));
    INSERT INTO users_09 (username, email)
VALUES
('user1', 'user1@gmail.com'),
('user2', 'user2@gmail.com'),
('user3', 'user3@gmail.com');
insert into playlists_p (user_id, name, created_at)
values
(1, 'workout mix', '2026-06-01 08:00:00'),
(2, 'chill vibes', '2026-06-10 19:30:00'),
(3, 'top hits', '2026-06-15 12:00:00');
update playlists_p
set name = 'evening chill'
where user_id = 2
and name = 'chill vibes';
delete from playlists_p
where user_id = 1
and name = 'workout mix';
delimiter //

create procedure getmonthlyplaylistcount(
    in p_user_id int,
    in p_month int
)
begin
    select count(*) as total_playlists
    from playlists_p
    where user_id = p_user_id
    and month(created_at) = p_month;
end //

delimiter ;