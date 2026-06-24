declare
    v_counter number := 1;
begin
    loop
        dbms_output.put_line(v_counter);
        v_counter := v_counter + 1;

        exit when v_counter > 5;
    end loop;
end;