
#include <iostream>
using namespace std;

int main(){
    cout<<"Hello Ronak"<<endl;
    char selection{};
    do{
        double width{},height{};
        cout<<"Enter width and hieght seperated by space"<<endl;
        cin>>width>>height;
        
        double area{width * height};
        cout<<"The area is : "<<area<<endl;
        
        cout<<"Calculate another ? (Y/N) : ";
        cin>>selection;
        
    }while(selection =='y' || selection == 'Y');
    
    cout<<"Thank you";
    
    return 0;
}