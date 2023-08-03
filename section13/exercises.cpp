get_name returns the name attribute of the dog 

set_name sets the name attribute of the dog to the string that is passed into the method.

get_age returns the age attribute of the dog

set_age sets the age attribute of the dog to the int passed into the method.

Please add your code to the Dog.h file. The exercise.cpp file should NOT be modified.

#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
string get_name(){return name;}
void set_name(string n){name=n;}

int get_age(){return age;}
void set_age(int a){age=a;}

//---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 
