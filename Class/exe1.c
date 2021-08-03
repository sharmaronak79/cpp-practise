#include <iostream>
using namespace std;

class MyClass{

	public:
    int x;
    int y;
    void fun(){cout<<"Ronak\n";}
	
};

int main()
{

MyClass cl;
cl.fun();
cl.x=5;
cl.y=10;
cout<<"x="<<cl.x<<"\n";
cout<<"y="<<cl.y<<"\n";

return 0;
}
