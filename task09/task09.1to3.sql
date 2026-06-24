create table orders_09 (
    order_id int(11),
    product_name varchar(100),
    amount int(11));
insert into orders_09
values (101, 'mobile', 25000);
commit;
select * from orders_09;
rollback;
select * from orders_09;
savepoint orders_09;
rollback to orders_09;
select * from orders_09;
