
#include <iostream>
using namespace std;

int main(){
  cout<<"Welcome to Frank's Room cleaning Ssrvice"<<endl;
  cout<<endl;
  cout<<"Howmany small rooms would you like cleaned?"<<endl;
  int number_of_small_rooms{0};
  cin>>number_of_small_rooms;
  cout<<"Howmany large rooms would you like cleaned?"<<endl;
  int number_of_large_rooms{0};
  cin>>number_of_large_rooms;
  
  const double price_per_small_room{25};
  const double price_per_large_room{30};
  const double sales_tax{0.06};
  const int estimate_expiry{30};//days
  
  cout<<"\nEstimate for carpet cleaning service"<<endl;
  cout<<"number of small rooms :"<<number_of_small_rooms<<endl;
  cout<<"number of large rooms :"<<number_of_large_rooms<<endl;
  cout<<"Price per small Room:$"<<price_per_small_room<<endl;
  cout<<"Price per large Room:$"<<price_per_large_room<<endl;
  double cost = (price_per_small_room*number_of_small_rooms) + (price_per_large_room*number_of_large_rooms) ;
  double tax = (price_per_small_room*number_of_small_rooms*sales_tax) + (sales_tax*price_per_large_room*number_of_large_rooms);
cout<<"Cost :$"<<cost<<endl;
cout<<"Tax :$"<<tax<<endl;
cout<<"========================================"<<endl;
cout<<"Toatal estimate : $"<<cost + tax <<endl;
cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;  
    
    return 0;
}