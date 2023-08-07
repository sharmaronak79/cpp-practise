#include<iostream>
#include<string>

using namespace std;

class PLayer{
private:
string name;
int health;
int xp;

public:
void set_name(string name_value){
    name=name_value;
}
string get_name(){
    return name;
}

PLayer(){
    name="None";
    health=1000;
    xp=78;
}

};

int main(){

    cout<<"Default Constructor"<<endl;

    PLayer frank;
    frank.set_name("Frank");
    cout<<frank.get_name()<<endl;


    return 0;
}
