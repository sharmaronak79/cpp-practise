#include<iostream>
using namespace std;

void display(char a='*',int b=3);

int main(){
    
    display();
    display('@',5);
    display('&');
    return 0;
}

void display(char x, int y){
    for(int i=0;i<y;i++){
        cout<<x;
    }
    cout<<endl;
}



