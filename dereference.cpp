
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
cout<<"Hello Ronak"<<endl;
    string name {"Ronak"};
    string *str_ptr {&name};
    
    cout<<*str_ptr<<endl;
    name = "Mitesh";
    
    cout<<*str_ptr<<endl;
    
    
    return 0;
}
