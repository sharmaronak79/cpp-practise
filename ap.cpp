#include<iostream>
#include<string>
#include<algorithm>
#include<array>
using namespace std;

int main()
{
const size_t index=5;
array<string,index>colors={"yellow","red","blue","black","white"};
cout<<"unsorted array : \n";
for(string color:colors)
cout<<color<<endl;
sort(colors.begin(),colors.end());
cout<<"sorted array : \n";
for(string item:colors)
cout<<item<<endl;
return 0;
}