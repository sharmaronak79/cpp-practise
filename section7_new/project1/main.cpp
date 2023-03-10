#include <vector>
#include <iostream>
using namespace std;

int main(){
    int value{};
    vector <int> a {10,20,30};
    vector <int> number{};
    cout<<"Enter number : ";
    cin>>value;
    number.push_back(value);
    cout<<"\n values in vector : "<<number.at(0)<<endl;
    cout<<"Enter another value : ";
    cin>>value;
    number.push_back(value);
    cout<<"\n values in vector : "<<number.at(0)<<" "<<number.at(1)<<endl;
    cout<<"Size of the vector is "<<number.size()<<endl;
    
    
    
}