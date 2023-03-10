#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector <int> a {10,20,30};
    cout<<"\nResulting using array style"<<endl;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    
    cout<<"\nResulting using vector style"<<endl;
    cout<<a.at(0)<<endl;
    cout<<a.at(1)<<endl;
    cout<<a.at(2)<<endl;
    return 0;
}