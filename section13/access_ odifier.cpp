#include<iostream>
#include<string>

using namespace std;

class Player{
    private:
    //Attributes
    string name;
    int health;
    int xp;

    public:
    //methods
    void set_name(string n);
    string get_name();
    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}
    bool is_dead();
};

void Player::set_name(string n){name=n;}
string Player::get_name(){return name;}


int main(){
    cout<<"Hello Ronak\n";
    
    Player Kambli;
    Kambli.set_name("Vinod");
    Kambli.talk("Hello");

    return 0;
}
