declare
    cursor c_products is
        select product_name
        from products;

    v_product_name products.product_name%type;
begin
    open c_products;

    loop
        fetch c_products into v_product_name;
        exit when c_products%notfound;

        dbms_output.put_line(v_product_name);
    end loop;

    close c_products;
end;
