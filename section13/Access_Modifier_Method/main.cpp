#include<iostream>
#include "Account.h"
using namespace std;

int main(){
    cout<<"Hello Ronak\n";

    Account ronak_account;
    ronak_account.set_name("Ronak's Account");
    ronak_account.set_balance(9000);

    if(ronak_account.deposit(500))
        cout<<"Deposit is OK"<<endl;
    else
        cout<<"Deposit is not allowed"<<endl;

    if(ronak_account.withdraw(500))
        cout<<"Withdraw is OK"<<endl;
    else
        cout<<"NOt enough Funds"<<endl;

    if(ronak_account.withdraw(1500))
        cout<<"withdraw OK"<<endl;
    else    cout<<"Not Enough Funds"<<endl;

    return 0;
}