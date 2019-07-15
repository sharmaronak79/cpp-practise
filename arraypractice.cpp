#include<iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    const size_t arraysize=5;
    array<int,arraysize>s;
    cout<<"enter the valueof elements " << endl;
    for(int i=0;i<s.size();i++){cin>>s[i];}
    int total=0;
    for(size_t i=0;i<s.size();++i)
    total+=s[i];
    cout<<"sum of elements in array is : "<< total <<endl;
    }