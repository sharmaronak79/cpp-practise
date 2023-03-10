
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Hello Ronak"<<endl;
    vector <int> vec {10,20,30,40,50};
    
    vec.at(0)=100;
    vec.at(4)=1000;
    
    
    return 0;
}