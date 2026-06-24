declare
    v_num1 number := 10;
    v_num2 number := 0;
    v_result number;
begin
    v_result := v_num1 / v_num2;

    dbms_output.put_line('result: ' || v_result);

exception
    when zero_divide then
        dbms_output.put_line('cannot divide by zero');
end;