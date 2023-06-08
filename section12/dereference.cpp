
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
    cout<<"-------------------------------"<<endl;
    
    vector <string> stooges{"Larry","Moe","Curly"};
    vector <string> *vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    
    cout<<"First stooge is : "<< (*vector_ptr).at(0)<<endl;
    
    cout<<"Stooges : ";
    for(auto stooge: *vector_ptr){
        cout<<stooge<<" ";
    }
    cout<<endl;
    
    
    
    return 0;
}
