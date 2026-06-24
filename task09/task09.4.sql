create or replace trigger trg_wallet_deduction
after insert on transactions
for each row
begin
    update wallet
    set balance = balance - :new.purchase_amount
    where user_id = :new.user_id;
end;