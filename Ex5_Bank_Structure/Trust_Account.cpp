#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Account(name, balance), int_rate(int_rate){
}

bool Trust_Account::deposit(double amount) {
    if(amount >= 5000)
        amount += 50;
    return Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if(count < 4){
        count++;
        if(moneyLast == 0){
            moneyLast = amount;
            return Account::withdraw(amount);
        }else{
            if (amount <= moneyLast*(8/10.0)){
                moneyLast = amount;
                return Account::withdraw(amount);
            }
            else
                return false;
        }
    }
}
std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
    os << "[Account: " << account.get_balance()<< "] ";
    return os;
}
