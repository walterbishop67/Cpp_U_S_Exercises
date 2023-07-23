#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H
#include "Account.h"


class Trust_Account : public Account{

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
    int count = 0;
    double moneyLast = 0;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account() = default;
};


#endif _TRUST_ACCOUNT_H
