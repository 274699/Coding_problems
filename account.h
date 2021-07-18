#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    std::string m_accNumber;
    std::string m_accName;
    double m_balance=0.0;
    int m_mobNumber;

public:
Account();
Account(std::string accNumber,std::string accName,double balance, int mobNumber);
Account(std::string accNumber,std::string accName, int mobNumber);
Account(const Account& ref);

void debit(double dmoney);
void credit(double cmoney);
double getBalance() const;
int getMobNumber() const;
std::string getaccNumber() const;
std::string getaccName() ;
void display() const;

 ~Account();
};

#endif