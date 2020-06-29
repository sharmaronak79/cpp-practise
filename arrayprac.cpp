#include<iostream>
using namespace std;
int main()
{
    int arr[5]={14,20,35,9,17};

for(int i=0;i<5;i++)
{
    cout<<"value of arr["<<i<<"]"<<"="<<arr[i]<<endl;
}

for(int i=0;i<5;i++)
{
    cout<<"Address of arr["<<i<<"]"<<"="<<&arr[i]<<endl;
}

    return 0;
}
