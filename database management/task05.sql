create table influeners(influencer_id int(11) primary key auto_increment,
name varchar(255));
create table posts(post_id int(11) primary key auto_increment,
i_id int(11),
caption varchar(255),
foreign key(i_id) references influeners (influencer_id));
insert into influeners (name) values ('kanisha'),('siddhi'),('dipsk');
insert into posts(i_id,caption) values
(1,'creating my own sunshine'),
(3,'whatever is good for your soul do that');
select influeners.name,posts.caption from influeners inner join 
posts on influeners.influencer_id=posts.i_id;
select influeners.name,
ifnull(posts.caption,'no posts') as caption
from influeners
left join posts
on influeners.influencer_id = posts.i_id;
select ifnull(influeners.name, 'no influencer') as influencer_name,
posts.caption
from influeners
right join posts 
on influeners.influencer_id = posts.i_id;