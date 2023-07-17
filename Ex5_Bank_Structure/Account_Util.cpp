#include "Account_Util.h"
void display (const std::vector<Account> &account){
    std::cout<<"\n====Account==================="<<std::endl;
    for(const auto &acc: account)
        std::cout<< acc << std::endl;
}
void deposit (std::vector<Account> &account, double amount){
    std::cout<<"\n====deposit to account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
    }
}
void withdraw (std::vector<Account> &account, double amount){
    std::cout<<"\n====deposit to account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}

void display (const std::vector<Savings_Account> &account){
    std::cout<<"\n====Savings_Account==================="<<std::endl;
    for(const auto &acc: account)
        std::cout<< acc << std::endl;
}
void deposit (std::vector<Savings_Account> &account, double amount){
    std::cout<<"\n====deposit to Savings_Account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
    }
}
void withdraw (std::vector<Savings_Account> &account, double amount){
    std::cout<<"\n====withdraw to Savings_Account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}


void display (const std::vector<Checking_Account> &account){
    std::cout<<"\n====Checking_Account==================="<<std::endl;
    for(const auto &acc: account)
        std::cout<< acc << std::endl;
}
void deposit (std::vector<Checking_Account> &account, double amount){
    std::cout<<"\n====deposit to Savings_Account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
    }
}
void withdraw (std::vector<Checking_Account> &account, double amount){
    std::cout<<"\n====withdraw to Savings_Account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}


void display (const std::vector<Trust_Account> &account){
    std::cout<<"\n====Trust_Account==================="<<std::endl;
    for(const auto &acc: account)
        std::cout<< acc << std::endl;
}
void deposit (std::vector<Trust_Account> &account, double amount){
    std::cout<<"\n====deposit to Trust_Account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of " << amount << " to " << acc << std::endl;
    }
}
void withdraw (std::vector<Trust_Account> &account, double amount){
    std::cout<<"\n====withdraw to Trust_Account==================="<<std::endl;
    for(auto &acc: account) {
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl;
    }
}
