
#include <iostream>
using namespace std;

int main(){
    cout<<"Hello Ronak"<<endl;
    int num1{200};
    int num2{100};
    
   // cout<<num1<< " + "<<num2<<" = "<<num1+num2<<endl;
 
    int result{0};
    
     result=num1 + num2;
    cout<<num1<< " + "<<num2<<" = "<< result <<endl;
    
    result=num1 - num2;
    cout<<num1<< " - "<<num2<<" = "<< result <<endl;
    
     result=num1 * num2;
    cout<<num1<< " * "<<num2<<" = "<< result <<endl;
    
     result=num1 / num2;
    cout<<num1<< " / "<<num2<<" = "<< result <<endl;
    
     result=num2 / num1;
    cout<<num2<< " / "<<num1<<" = "<< result <<endl;
    
     result=num1 % 3;
    cout<<num1<< " % "<<3<<" = "<< result <<endl;
    
    cout<<"5.0 / 10.0 = "<<5.0/10.0<<endl; 
    
    
    
    return 0;
}