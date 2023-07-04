using namespace std;
#include <iostream>

int main(){
    cout<<"Hello Ronak\n";
    size_t size{0};

    int *arry_ptr{nullptr};
    cout<<"How big do you want an array size ? : ";
    cin>>size;
    arry_ptr = new int[size];
    cout<<arry_ptr<<endl;
    delete arry_ptr;
    cout<<arry_ptr<<endl;


    
    double *temp_ptr{nullptr};
    cout<<"Howmany temperatures ? : ";
    cin >> size;
    temp_ptr = new double[size];
    cout<< temp_ptr<<endl;
    cout<<*temp_ptr<<endl;

    for(size_t i=1;i<=size;i++){
        *temp_ptr=i + 0.2653;
        cout<<*temp_ptr<<endl;
    }
    delete temp_ptr;



    return 0;
    
}
