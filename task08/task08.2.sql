declare
    v_order_amount number := 650;
begin
    if v_order_amount > 500 then
        dbms_output.put_line('eligible for free delivery');
    else
        dbms_output.put_line('delivery charges apply');
    end if;
end;