//Section13
//Declare and Class Object

#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Player{
//Attributes
public:
string name;
int health;
int xp;

//Methods
void talks(string data){cout<<name<<" says : "<<data <<endl;}
bool is_dead();
};

class Account{
    public:
    //Attributes
    string name;
    double balance;

    //Method
    bool deposit(double bal);
    bool withdraw(double bal);
};

int main(){
    cout<<"Hello Ronak"<<endl;

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp=12;
    frank.talks("How are you ?");

    


    return 0;
}
