#include<iostream>
#include<string.h>

using namespace std;

class Player{
private:
string name;
int health;
int xp;

public:
void set_name(string n){
    name=n;
}

//Overload constructor
Player(){
    cout<<"No arguments Constructor is called"<<endl;
}
Player(string name){
    cout<<"String argument constructor is called"<<endl;
}
Player(string name,int helath, int xp){
    cout<<"Three argumetns constructo is called"<<endl;
}
~Player(){
    cout<<"Destructor is called for "<< name<<endl;
}

};

int main(){

    cout<<"Hello Ronak \nThis is COnstructor and Destructor Programme\n";

    {
        Player slayer;
        slayer.set_name("Slayer");
    }

    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villian("Villaion",100,12);
        villian.set_name("Villain");
    }

    {
        Player *enemy = new Player;
        enemy->set_name("Enemy");
    }

    return 0;
}
