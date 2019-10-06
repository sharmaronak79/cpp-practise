#include <iostream>
#include <string>

using namespace std; 	//introduces namespace std
int main( void )
{

int password;
int passin;
string username;
string userinput;
cout <<"enter user name"<<endl;
cin>> username ;
cout << "enter password"<<endl;
cin>> password;

cout << "regestration is done"<<endl;

cout<< "what is your username ? :"<<endl;
cin >> userinput;
if (username == userinput);
{
    cout<<"what is your password ? :"<<endl;
    cin >> passin;
    if (password == passin);
    {
        cout << "Access granted" <<endl;
    }
    else
    {
        cout << "wrong pasword..."<<endl;
    }
    
}
else{    cout << "wrong username.."<<endl;}

    
return 0;
}