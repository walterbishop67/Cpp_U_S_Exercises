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
void Trust_Account::print(std::ostream &os) const {
    os.precision(2);
    os<<std::fixed;
    os << "[truth: " << name <<": " << balance << ", " << int_rate << "%] ";
}