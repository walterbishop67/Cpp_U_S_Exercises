#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &account, double amount);
void withdraw(std::vector<Account> &account, double amount);

void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &account, double amount);
void withdraw(std::vector<Savings_Account> &account, double amount);

void display(const std::vector<Checking_Account> &accounts);
void deposit(std::vector<Checking_Account> &account, double amount);
void withdraw(std::vector<Checking_Account> &account, double amount);

void display(const std::vector<Trust_Account> &accounts);
void deposit(std::vector<Trust_Account> &account, double amount);
void withdraw(std::vector<Trust_Account> &account, double amount);

#endif
