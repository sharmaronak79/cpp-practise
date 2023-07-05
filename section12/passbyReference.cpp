#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector <string> *v){
    for(auto string : *v){
        cout<<string << " ";
    }
}

int main(){
cout<<"Hello Ronak"<<endl;

vector <string> name{"Ronak","Mitesh","Preet"};
display(&name);


return 0;
}
