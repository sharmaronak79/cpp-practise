#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    cout<< "Hello Ronak\n";

    // int num{100};
    // int &ref{num};
    

    // cout<<num<<endl;
    // cout<< ref <<endl;

    // num = 200;
    // cout<<"\n-----------------------------------------\n";
    // cout<<num<<endl;
    // cout<< ref <<endl;

    // ref = 300;
    // cout<<"\n-----------------------------------------\n";
    // cout<<num<<endl;
    // cout<< ref <<endl;

    cout<<endl;
    vector <string> stooges{"Larry","Moe","Curly"};

    for(auto str : stooges){
        str="Funny";            //str is a copy of each vector element

    }

    for(auto str : stooges){
        cout<<str<<endl;
    }
    cout<<"-----------------------------------------\n";

    for(auto &str : stooges){   //str is a reference to each vector element
        str = "Funny";
    }

    
    for(auto const &str : stooges){
        cout<<str <<endl;
    }


    return 0;
}
