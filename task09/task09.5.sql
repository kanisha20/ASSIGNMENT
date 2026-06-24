create or replace trigger trg_expense_bug
after insert on expenses
for each row
begin
    update wallet
    set balance = balance + :new.amount
    where user_id = :new.user_id;
end;