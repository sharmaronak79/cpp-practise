#include <iostream>
#include <cmath>
using namespace std;
void greet(string);

int main() {
    double number, squareRoot;
    
    number = 25.0;

    // sqrt() is a library function to calculate the square root
    greet("Ronak");
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;


    return 0;
}

 void greet(string h ){
     cout<<"hello "<<h<<endl;
 }