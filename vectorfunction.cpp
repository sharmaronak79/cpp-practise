#include <iostream> 
#include <vector> 
#include<algorithm>
using namespace std; 
vector<int>::iterator iter;
  
int main() 
{ 
    vector<int> myvec; //declare vector whose name is myvec and its type is integer
    myvec.push_back(3); 
    myvec.push_back(4); 
    myvec.push_back(1); 
    myvec.push_back(7); 
    myvec.push_back(5); 
    // Vector becomes 3, 4, 1, 7, 3 
    cout<<"myvec = ";
     for(iter=myvec.begin();iter<myvec.end();++iter)
    {
      
        cout<<*iter<< " ";
    }; // for loop to print content of vector 
    cout<< "\n the size of vector is : " << myvec.size()<<endl; //show the size of vector
  
    cout<< "the first lement of vector is : " << myvec.front()<<endl; //print first element
    cout<< "the last lement of vector is : " << myvec.back()<<endl; //print last element

    
    myvec.push_back(myvec.back()+3);//add 3 to last element
    myvec.push_back(myvec.front()+3);//add 3 to first lement
    
    cout<<"lets add 3 to first and last element and push them in to vector\n now modified vector is : "<<endl;
     cout<<"myvec = ";
     for(iter=myvec.begin();iter<myvec.end();++iter)
    {
      
        cout<<*iter<< " ";
    };

    sort(myvec.begin(), myvec.end(), greater<int>());
    cout<< "\n now the sorted vector in descending order is : "<<endl;

     cout<<"myvec = ";
     for(iter=myvec.begin();iter<myvec.end();++iter)
    {
      
        cout<<*iter<< " ";
    };
   return 0; 
} 