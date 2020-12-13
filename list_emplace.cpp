#include<iostream>
#include <list>
using namespace std;
int main()
{
    list<int> gqlist;
    list<int>::iterator it =gqlist.begin();

    for (int i=1;i<=5;i++)
    gqlist.emplace_back(i);

    cout<< "list after emplace_back() operation is :"<<endl;
    for(int &x : gqlist) cout <<x<< " ";
    cout<<endl;

     for(int i=10; i<=50; i+=10)
    gqlist.emplace_front(i);

    cout<<"list After emplance_front operation is :";
    for(int &x : gqlist) cout<< x <<" ";
    cout<< endl;

    advance(it,2);
    gqlist.emplace(it,100);

    cout<< " list after emplance operation is :";
    for(int &x :gqlist ) cout << x<<" " ;
    cout <<endl;

    return 0;
 
}
