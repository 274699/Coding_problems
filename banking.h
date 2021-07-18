/*Create a collection of Accounts using suitable STL container
  * Implement following operations on the collection
    * addAccount
    * removeAccount by id
    * display all accounts
    * find account by id
    * find all accounts matching with customer name (sub string match)
    * find average balance in all accounts
    * find the account with maximum balance
    * count all accounts with certain range of balance
    * count all accounts whose balance is less than certain limit*/

#ifndef __BANKING_H_
#define __BANKING_H_
#include <list>
#include "account.h"
class Banking{
std ::list<Account> accounts;

public:

void addAccount(std:: string name, std:: string accNumber, int mobNumber, double balance);
void removeAccountbyID( std:: string accNumber);
void displayAccounts( void);
Account* findAccountbyID(std:: string accNumber );
void matchingAccounts(std:: string name);//
double averageBalance( );
Account& maxBalance();
void countAccountsRange();
void lessBalanceAccounts();

};

#endif