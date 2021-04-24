Polymorphism in C++
Difficulty Level : Easy
Last Updated : 03 Jul, 2020
The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism, a person at the same time can have different characteristics. Like a man at the same time is a father, a husband, an employee. So the same person posses different behavior in different situations. This is called polymorphism. Polymorphism is considered as one of the important features of Object Oriented Programming.

In C++ polymorphism is mainly divided into two types:

Compile time Polymorphism
Runtime Polymorphism
Polymorphism-in-CPP

Compile time polymorphism: This type of polymorphism is achieved by function overloading or operator overloading.


Function Overloading: When there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.
Rules of Function Overloading

// C++ program for function overloading
#include <bits/stdc++.h>
  
using namespace std;
class Geeks
{
    public:
      
    // function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
      
    // function with same name but 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }
      
    // function with same name and 2 int parameters
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
};
  
int main() {
      
    Geeks obj1;
      
    // Which function is called will depend on the parameters passed
    // The first 'func' is called 
    obj1.func(7);
      
    // The second 'func' is called
    obj1.func(9.132);
      
    // The third 'func' is called
    obj1.func(85,64);
    return 0;
} 
Output:

value of x is 7
value of x is 9.132
value of x and y is 85, 64
