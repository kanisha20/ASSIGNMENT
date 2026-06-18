create table playlist(id int(10) auto_increment primary key,
song_name varchar(255),
artist varchar(255),
genre varchar(255),
play_count bigint(11));
insert into playlist (song_name,artist,genre,play_count)
values
('kesariya', 'arijit singh', 'bollywood', 100),
('apna bana Le', 'arijit singh', 'bollywood', 200),
('heeriye', 'arijit singh', 'pop', 500),
('tum hi ho', 'arijit singh', 'bollywood', 250),
('chaleya', 'arijit singh', 'bollywood', 50);
select song_name,artist as singer from playlist;
select song_name from playlist where genre='pop' and play_count >100 order by play_count desc;
select count(*) as hip_hop_songs from Playlist where genre = 'hip-hop';
select genre , sum(play_count) from playlist group by genre;