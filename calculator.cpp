#include<iostream>
#include<math.h>
using namespace std;
using std::cout;
using std::endl;



 void  addition(int a, int b)
 {
    int sum = 0;
    sum = a+b;
  cout << "sum = "<< sum<<endl;

 }

void subtraction(int a, int b)
{
    int sub=0;
    sub= a - b;
    cout<<"subtraction is = "<< sub<<endl;

    }

int multiplication(int a, int b)
{
 int mul=0;
 mul=a*b;
 return mul;
}

int division(int a,int b)
{
 int div=0;
 div=a/b;
 return div;
}

int main()
{

 int num1, num2;
 int result=0;
 int op;



 cout<<"enter 1 for addition \n enter 2 for subtraction\n enter 3 for multiplication\n enter 4 fordivision "<< endl;
 cin >> op;

  switch (op){

  case 1:
  cout<<"enter first number"<<endl;
 cin>>num1;
 cout<<"enter second number"<<endl;
 cin>>num2;
  addition(num1,num2);
  break;
  case 2:
  cout<<"enter first number"<<endl;
 cin>>num1;
 cout<<"enter second number"<<endl;
 cin>>num2;
  subtraction(num1,num2);
  break;
  case 3:
  cout<<"enter first number"<<endl;
 cin>>num1;
 cout<<"enter second number"<<endl;
 cin>>num2;
 result=multiplication(num1,num2);
 cout<<"multiplication of numberis = "<<result<<endl;
 break;
  case 4:
  cout<<"enter first number"<<endl;
 cin>>num1;
 cout<<"enter second number"<<endl;
 cin>>num2;
 result=division(num1,num2);
 cout<<"division of numberis = "<<result<<endl;
 break;

  }




}






