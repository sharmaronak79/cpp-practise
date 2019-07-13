#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
    void setcarname(string name)
    {carname=name;}
    void setcarcolor(string color)
    {carcolor=color;}
    void setcarspeed(int speed)
    {carspeed=speed;}

    string getcarname()const
    {return carname;}
    string getcarcolor()const
    {return carcolor;}
    int getcarspeed()const
    {return carspeed;}
    

    void displaymessage() const
    {
        cout<<"welcome to autoworld of "<<getcarname()<<endl;
    
    cout<< "it has  "<< getcarcolor()<<" color "<<endl; 
    cout<< "it has maximum speed of "<< getcarspeed()<<" km/h"<<endl;
     }

   private:
   string carname;
   string carcolor;
   int carspeed;
};

int main()
{
    string nameofcar;
    string colorofcar;
    int speedofcar;
    Vehicle car;

    cout<< "initial vehicle is : " <<car.getcarname()<<endl;

    cout<< "\n enter the car name : " << endl;
    getline(cin,nameofcar);
    car.setcarname(nameofcar);

    
    cout<< "\n enter the car color : " << endl;
    getline(cin,colorofcar);
    car.setcarcolor(colorofcar);

    
    cout<< "\n enter the car speed : " << endl;
   cin>>speedofcar;
    car.setcarspeed(speedofcar);

    cout<<endl;
    car.displaymessage();
}