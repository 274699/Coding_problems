#include <iostream>
#include "account.h"
using namespace std;

Account::Account(/* agrs */):m_accNumber("a34"), m_accName("ooo"), m_balance(0.0), m_mobNumber(000){


}


Account::Account(string accNumber, string accName, double balance , int mobNumber):m_accNumber(accNumber), m_accName(accName), m_balance(balance), m_mobNumber(mobNumber){


}


Account::Account(const Account& ref):m_accNumber(ref.m_accNumber), m_accName(ref.m_accName), m_balance(ref.m_balance), m_mobNumber(ref.m_mobNumber)
{

}

Account::Account(string accNumber, string accName, int mobNumber):m_accNumber(accNumber), m_accName(accName), m_mobNumber(mobNumber){


}

Account::~Account(){
    cout<<"Destructor Called"<<endl;
}
void Account::debit(double dmoney){
    if(m_balance>= dmoney){
    m_balance=m_balance-dmoney;}

    else
        cout<<"Not enough money:)";

}

void Account::credit(double cmoney){
    m_balance=m_balance+cmoney;
    
}

double Account::getBalance() const{
    return m_balance;
}

int Account::getMobNumber() const{
    return m_mobNumber;
}
std::string Account::getaccNumber() const{
    return m_accNumber;
}
//std::string getaccName() {
    //return m_accName;
//}
void Account::display() const{
    cout<<m_accName<<"\n"<< m_accNumber<<m_balance<<"\n"<<m_mobNumber<<"\n"<< std::endl;
}