#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};


double a_penny_doubled_everyday(int day, double penny=0.01);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES


void amount_accumulated() {
    
double total_amount = a_penny_doubled_everyday(25);
    
    
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}


double a_penny_doubled_everyday(int day,double amount) {
    function_activation_count++;
   
     if (day <= 1)
        return amount;
    return a_penny_doubled_everyday(--day, amount*2);
    
    
   
}

int test_function_activation_count() {
    return function_activation_count;
}
