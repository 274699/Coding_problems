#include "banking.h"
std::list<Account>::iterator iter;
void Banking:: addAccount(std:: string accNumber,std:: string name,  int mobNumber, double balance){

    accounts.emplace_back( accNumber,name, mobNumber,balance );
}

void Banking:: removeAccountbyID( std:: string accNumber){
for(iter=accounts.begin(); iter!=accounts.end(); ++iter){
    if(iter->getaccNumber() == accNumber)
        break;
}
 if(iter!=accounts.end())
     accounts.erase(iter);

}

void Banking:: displayAccounts( void){
    for(iter=accounts.begin(); iter!=accounts.end(); ++iter){
        iter->display();}
}

Account* Banking::findAccountbyID(std:: string accNumber ){
    for(iter=accounts.begin(); iter!=accounts.end(); ++iter){
         if(iter->getaccNumber() == accNumber)
            break;
    }

     if(iter!=accounts.end())
     return &(*iter);
   else
     return nullptr;

}

double Banking:: averageBalance( ){
    double totalBalance=0;
  for(iter=accounts.begin(); iter!=accounts.end(); ++iter)
     totalBalance += iter->getBalance();

  return totalBalance/accounts.size();
}

Account& Banking::maxBalance(){
 std::list<Account>::iterator iter = accounts.begin();
  auto maxIter=iter;
  double maxPrice=iter->getBalance();
  ++iter;
  for(;iter!=accounts.end(); ++iter)
    if(iter->getBalance() > maxPrice) {
        maxPrice = iter->getBalance();
        maxIter = iter;
    }
    return *maxIter;   
}