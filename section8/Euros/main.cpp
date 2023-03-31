//section 8
//Convert EUR to USD

#include <iostream>
using namespace std;

int main(){
    const double usd_per_eur{1.19};
    double euros{0.0};
    double dollars{0.0};
    cout<<"Welcome to EUR to USD Converter"<<endl;
    
    cout<<"Enter Euro : ";
    cin>>euros;
    dollars= euros*usd_per_eur;
    
    cout<< euros<<" euros is equal to : "<<dollars<<"  USD"<<endl;
    
    
    
    
    return 0;
}