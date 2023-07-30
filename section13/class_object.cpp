//Section13
//Declare and Class Object

#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Player{
//Attributes
string name;
int health;
int xp;

//Methods
void talks(string);
bool is_dead();
};

class Account{
    //Attributes
    string name;
    double balance;

    //Method
    bool deposit(double);
    bool withdraw(double);
};

int main(){
    cout<<"Hello Ronak"<<endl;

    Player frank;
    Player hero;

    Player players[]{frank,hero};

    vector <Player> player_vec{frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;


    return 0;
}
