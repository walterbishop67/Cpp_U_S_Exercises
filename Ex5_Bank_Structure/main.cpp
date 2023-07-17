#include <iostream>
#include <vector>
#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout<<fixed;

    //Account
    vector<Account> accounts;
    accounts.push_back(Account());
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    //Savings
    vector<Account> sav_accounts;
    sav_accounts.push_back(Savings_Account());
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking
    vector<Account> check_accounts;
    check_accounts.push_back(Account());
    check_accounts.push_back(Account{"a"});
    check_accounts.push_back(Account{"b", 2000});
    check_accounts.push_back(Account{"c", 5000});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    //Trust
    vector<Account> trust_accounts;
    trust_accounts.push_back(Account());
    trust_accounts.push_back(Account{"d"});
    trust_accounts.push_back(Account{"e", 2000});
    trust_accounts.push_back(Account{"f", 5000});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);

    for(int i = 1; i <= 5; i++)
        withdraw(trust_accounts, 1000);

    return 0;
}
