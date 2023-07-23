#include "Account_Util.h"
void display (const std::vector<Account *> &account){
    std::cout<<"\n====Account==================="<<std::endl;
    for(const auto acc: account)
        std::cout<< *acc << std::endl;
}
void deposit (std::vector<Account *> &account, double amount){
    std::cout<<"\n====deposit to account==================="<<std::endl;
    for(auto acc: account) {
        if (acc -> deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << *acc << std::endl;
    }
}
void withdraw (std::vector<Account *> &account, double amount) {
    std::cout << "\n====deposit to account===================" << std::endl;
    for (auto acc: account) {
        if (acc -> withdraw(amount))
            std::cout << "withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << *acc << std::endl;
    }
}
