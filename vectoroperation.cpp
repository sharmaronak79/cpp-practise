#include <iostream> 
#include <vector> 
using namespace std; 
 vector<int>::iterator iter; 
int main() 
{ 
    int sum = 0; 
    int mul=1;
    vector<int> myvec{ 1, 5, 6, 3, 9, 2 }; 
    while (!myvec.empty()) { 
        sum = sum + myvec.back(); 
        
        myvec.pop_back(); 
    } 
    cout <<"sum of elements of vector is = " <<sum; 
    
     for (iter=myvec.begin();iter<myvec.end();++iter)
     {
         mul=mul*(*iter);
     };
    

     cout <<"\nmultiplication of elements of vector is = " <<mul; 
   
    return 0; 
}