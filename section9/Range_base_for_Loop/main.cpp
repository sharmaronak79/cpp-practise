
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Hello Ronak"<<endl;
//    int scores[]{10,20,30};
//    
//    for(int score:scores)
//        cout<<score<<endl;
//    for(auto score:scores)
//        cout<<score<<endl;    
//    
    vector<double> temps{87.9,77.9,80.25,72.5};
    double average_temp{};
    double total{};
    for(auto temp:temps)
        total+=temp;
    if(temps.size()!=0)    
        average_temp=total/temps.size();

    cout<<"Average temp is : "<<average_temp;
    return 0;
}