#include "account.h"
#include "banking.h"
//#include <gtest/gtest.h>
/*namespace {

class AccountsTest : public ::testing::Test {

protected:
  void SetUp() { 
    accounts.addAccount( "Scott","abc1001", "9845012345", 400.50);
    accounts.addAccount("Andrew","abc1002", "4587269314", 580.50);
    accounts.addAccount("John","abc1003", "9845015896", 3200.50);
    accounts.addAccount("Vishal","abc1004", "9845025631", 4700.50);
    accounts.addAccount("Arsh","abc1005", "9845014569", 456.50);
    accounts.addAccount("Sam","abc1006", "9845078543", 2140.50);
  }
  void TearDown() {}
  AccountsTest accounts;
};

TEST_F(AccountsTest, addAccountTest) {
  accounts.addAccount( "John","abc1009", "9845012350", 100.50);
  EXPECT_NE(NULL, accounts.findAccountbyID("abc1009"));

}
TEST_F(AccountsTest, removeAccountbyIDTest) {
  accounts.removeAccountbyID("abc1005");
  EXPECT_EQ(NULL, accounts.findAccountbyID("abc1005"));
 // EXPECT_EQ(5, accounts.countAll());
}
/*TEST_F(AccountsTest, CountTest) {             //Just After Setup
  EXPECT_EQ(6, accounts.countAll());
}*/
/*TEST_F(AccountsTest, FindByIdTestTrue) {
  Account *ptr = accounts.findAccountbyID("abc1004");
  EXPECT_NE(NULL, ptr);
  EXPECT_EQ(4700.54, ptr->getBalance());
  /*EXPECT_STREQ("Vishal", ptr->getName().c_str());
  EXPECT_STREQ("9845025631", ptr->getPhone().c_str());*/
//}
/*TEST_F(AccountsTest, FindByIdTestFalse) {
  Account *ptr = accounts.findAccountbyID("abc1011");
  EXPECT_EQ(NULL, ptr);
}
/*TEST_F(AccountsTest, FindByPhoneTest) {
  Account *ptr = accounts.findCustomerByPhone("9845012347");
  EXPECT_EQ(300, ptr->getBalance());
  EXPECT_STREQ("Richard", ptr->getName().c_str());
  EXPECT_EQ(1003, ptr->getCustomerId());
}*/
/*TEST_F(AccountsTest, AverageTest) {
  double avg = accounts.averageBalance();
  EXPECT_EQ(1913.166, avg);
}
TEST_F(AccountsTest, MaxTest) {
  double maxbal = accounts.maxBalance();
  EXPECT_EQ(4700.50, maxbal);
}
/*TEST_F(AccountsTest, CountMinBalTest) {
  int count = accounts.countByMinBalance(320);
  EXPECT_EQ(4, count);
}*/
/*} // namespace
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/

/*int main(){
   addAccount( "Scott","abc1001", "9845012345", 400.50);
    accounts.addAccount("Andrew","abc1002", "4587269314", 580.50);
    accounts.addAccount("John","abc1003", "9845015896", 3200.50);
    accounts.addAccount("Vishal","abc1004", "9845025631", 4700.50);
    accounts.addAccount("Arsh","abc1005", "9845014569", 456.50);
    accounts.addAccount("Sam","abc1006", "9845078543", 2140.50);

    accounts.displayAccounts();

}*/

#include <gtest/gtest.h>

/**
 * @brief Testing empty constructor
 * 
 */
TEST(Account, Empty_Constructor)
{
  Account a;
  EXPECT_EQ("a34", a.getaccNumber());
  EXPECT_FLOAT_EQ(0.0, a.getBalance());
  EXPECT_EQ(000, a.getMobNumber());
  EXPECT_EQ("ooo", a.getaccName());
  
}

/**
 * @brief Testing parameterised constructor
 * 
 */
/*TEST(Data, Param_Constructor)
{
  Data a("Soap", 20, 50, "Unavailable", 20.1);
  EXPECT_EQ("Soap", a.getProductName());
  EXPECT_EQ(20, a.getProductNum());
  EXPECT_FLOAT_EQ(50, a.getDemand());
  EXPECT_EQ("Unavailable", a.getState());
  EXPECT_FLOAT_EQ(20.1, a.getQuantity());
}*/

/**
 * @brief Testing stringToObject function
 * 
 */
/*TEST(Data, stringToObject)
{
  Data a = stringToObject("Shampoo,101,50.1,Available,25.51");
  EXPECT_EQ("Shampoo", a.getProductName());
  EXPECT_EQ(101, a.getProductNum());
  EXPECT_FLOAT_EQ(50.1, a.getDemand());
  EXPECT_EQ("Available", a.getState());
  EXPECT_FLOAT_EQ(25.51, a.getQuantity());
}*/

/**
 * @brief Testing highestDemandConsumer function
 * 
 */
/*TEST(Data, highestDemandConsumer)
{
  vector<Data> testInventory;
  Data a = stringToObject("Shampoo,101,50.1,Available,25.51");
  Data b = stringToObject("Soap,5,90.5,Unavailable,35.6");
  Data c = stringToObject("Sugar,403,70.4,Available,25.74");
  testInventory.push_back(a);
  testInventory.push_back(b);
  testInventory.push_back(c);
  EXPECT_EQ(5, highestDemandConsumer(testInventory));
}

/**
 * @brief Testing highestProductQuantity function
 * 
 */
TEST(Banking, highestProductQuantity)
{
  list<Banking> test;
  Banking a = addAccount("Shampoo","101",222,25.51);
  Banking b = addAccount("Sham","ac101",252,255.1);
 Banking c = addAccount("poo","bc01",2292,2552.1);
  test.emplace_back(a);
  test.push_back(b);
  test.push_back(c);
  EXPECT_EQ(5, maxBalance());
}


/**
 * @brief Testing productStatusAvailable function
 * 
 */
/*TEST(Data, productStatusAvailable)
{
  vector<Data> testInventory, resultInventory, expectedResultInventory;
  string testStr = "Soap";
  Data a = stringToObject("Shampoo,101,50.1,Available,25.51");
  Data b = stringToObject("Soap,5,90.5,Unavailable,35.6");
  Data c = stringToObject("Sugar,403,70.4,Available,25.74");
  Data d = stringToObject("Soap,1,50,Available,25.5");
  Data e = stringToObject("Soap,2,60,Available,25.6");
  Data f = stringToObject("Soap,3,70,Available,25.7");
  Data g = stringToObject("Soap,100,80,Unavailable,65");
  Data h = stringToObject("Soap,5,90.5,Unavailable,35.6");
  testInventory.push_back(a);
  testInventory.push_back(b);
  testInventory.push_back(c);
  testInventory.push_back(d);
  testInventory.push_back(e);
  testInventory.push_back(f);
  testInventory.push_back(g);
  testInventory.push_back(h);
  
  expectedResultInventory.push_back(d);
  expectedResultInventory.push_back(e);
  expectedResultInventory.push_back(f);

  resultInventory = productStatusAvailable(testInventory, testStr);
  for (int i = 0; i < expectedResultInventory.size(); ++i)
  {
   EXPECT_EQ(expectedResultInventory[i].getProductName(), resultInventory[i].getProductName());
   EXPECT_EQ(expectedResultInventory[i].getProductNum(), resultInventory[i].getProductNum());
   EXPECT_EQ(expectedResultInventory[i].getDemand(), resultInventory[i].getDemand());
   EXPECT_EQ(expectedResultInventory[i].getState(), resultInventory[i].getState());
   EXPECT_EQ(expectedResultInventory[i].getQuantity(), resultInventory[i].getQuantity());
  }
}

/**
 * @brief Testing productStatusUnavailable function
 * 
 */
/*TEST(Data, productStatusUnavailable)
{
  vector<Data> testInventory, resultInventory, expectedResultInventory;
  int minimumQuantity = 30;
  Data a = stringToObject("Shampoo,101,50.1,Available,25.51");
  Data b = stringToObject("Soap,5,90.5,Unavailable,35.6");
  Data c = stringToObject("Sugar,403,70.4,Available,25.74");
  Data d = stringToObject("Soap,1,50,Available,25.5");
  Data e = stringToObject("Soap,2,60,Available,25.6");
  Data f = stringToObject("Soap,3,70,Available,25.7");
  Data g = stringToObject("Soap,100,80,Unavailable,65");
  Data h = stringToObject("Salt,204,80.2,Unavailable,35.52");
  testInventory.push_back(a);
  testInventory.push_back(b);
  testInventory.push_back(c);
  testInventory.push_back(d);
  testInventory.push_back(e);
  testInventory.push_back(f);
  testInventory.push_back(g);
  testInventory.push_back(h);
  
  expectedResultInventory.push_back(b);
  expectedResultInventory.push_back(g);
  expectedResultInventory.push_back(h);

  resultInventory = productStatusUnavailable(testInventory, minimumQuantity);
  for (int i = 0; i < expectedResultInventory.size(); ++i)
  {
   EXPECT_EQ(expectedResultInventory[i].getProductName(), resultInventory[i].getProductName()); 
   EXPECT_EQ(expectedResultInventory[i].getProductNum(), resultInventory[i].getProductNum()); 
   EXPECT_EQ(expectedResultInventory[i].getDemand(), resultInventory[i].getDemand()); 
   EXPECT_EQ(expectedResultInventory[i].getState(), resultInventory[i].getState()); 
   EXPECT_EQ(expectedResultInventory[i].getQuantity(), resultInventory[i].getQuantity());
  }
}
 
 /**
  * @brief testing the function productsAboutToFinish
  * 
  */
/*TEST(Data, productsAboutToFinish){
   vector<Data> testInventory, resultInventory, expectedResultInventory;
  int minimumQuantity = 30;
  Data a = stringToObject("Shampoo,101,50.1,Available,15.51");
  Data b = stringToObject("Soap,5,90.5,Unavailable,35.6");
  Data c = stringToObject("Sugar,403,70.4,Available,12.74");
  Data d = stringToObject("Soap,1,50,Available,25.5");
  Data e = stringToObject("Soap,2,60,Available,17.6");
  Data f = stringToObject("Soap,3,70,Available,25.7");
  Data g = stringToObject("Soap,100,80,Unavailable,65");
  Data h = stringToObject("Salt,204,80.2,Available,20.00");
  testInventory.push_back(a);
  testInventory.push_back(b);
  testInventory.push_back(c);
  testInventory.push_back(d);
  testInventory.push_back(e);
  testInventory.push_back(f);
  testInventory.push_back(g);
  testInventory.push_back(h);
  
  expectedResultInventory.push_back(a);
  expectedResultInventory.push_back(c);
  expectedResultInventory.push_back(e);
  expectedResultInventory.push_back(h);

  resultInventory = productsAboutToFinish(testInventory);
  for (int i = 0; i < expectedResultInventory.size(); ++i)
  {
   EXPECT_EQ(expectedResultInventory[i].getProductName(), resultInventory[i].getProductName()); 
   EXPECT_EQ(expectedResultInventory[i].getProductNum(), resultInventory[i].getProductNum()); 
   EXPECT_EQ(expectedResultInventory[i].getDemand(), resultInventory[i].getDemand()); 
   EXPECT_EQ(expectedResultInventory[i].getState(), resultInventory[i].getState()); 
   EXPECT_EQ(expectedResultInventory[i].getQuantity(), resultInventory[i].getQuantity());
  }
}*/

/**
 * @brief main function
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv)
{
  //readCSV();
  //printResults();
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


