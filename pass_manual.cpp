#include <iostream>
#include <string>
using namespace std;

int main(){
    string pass = "password";
    string input;
    string key;
    cout << "What is your password: " << endl;
    cin >> input;
    cout<<"unlock key? :  " << endl;
    cin>>key;
    if (input==key){
        cout << "Correct" << endl;
    }else{
        cout << "Wrong" << endl;
    }
    return 0;
}
