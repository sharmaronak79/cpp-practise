
#include <iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Hello Ronak"<<endl;
//    for(int i{1};i<=10;i++)
//        cout<<i<<endl;
//        
//    for(int k{10};k>0;k--)
//        cout<<k<<endl;
//   
//    
//    for(int j{10};j<=100;j+=10)
//        cout<<j<<" ";
//        cot<<endl;
//        
   for(int i{1},j{1};i<=5;++i,++j)
       cout<< i <<" + "<<j<< " = " << i+j<<endl;
   

//    for(int i{1};i<=100;i++){
//        cout<<i;
//        if(i%10==0)
//            cout<<endl;
//        else
//            cout<<" ";
//    }
//    

//    for(int i{1};i<=100;i++){
//        cout<<i;
//        cout<<(i%10==0?"\n":" ");
//    }
//    
//cout<<"Ronak"<<endl;
    vector<int> nums {10,20,30,40,50};
    for(unsigned i{0};i<nums.size();++i)
        cout<<nums[i]<<endl;

    cout<<"Done!!!!!!!!!"<<endl;
    return 0;
}
