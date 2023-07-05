#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector <string> *const v){
    //(*v).at(0)="Jwal"; // this is not allowed as it is also a constant
    for(auto string : *v){
        cout<<string << " ";
    }

    //v=nullptr;  //This will give an error as it is a constant
}

void Display_Num(int *array, int sentinel){
    while(*array != sentinel){
        cout<<*array++<<" ";
    }
    cout<<endl;
}

int main(){
cout<<"Hello Ronak"<<endl;

vector <string> name{"Ronak","Mitesh","Preet"};
display(&name);

cout<<"\n----------------------------------"<<endl;
int score[] {100,98,97,95,68,54,82,-1};
Display_Num(score,-1);

return 0;
}
