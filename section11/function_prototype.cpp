#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);

double fahrenheit_to_celsius(double temperature){
    temperature = (5.0/9.0)*(temperature - 32);
    return round(temperature);
}

double fahrenheit_to_kelvin(double temperature){
    temperature = (5.0/9.0)*(temperature - 32) + 273;
    return round(temperature);
}

void temperature_conversion(double fahrenheit_temperature) {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    double celsius_temperature = fahrenheit_to_celsius( fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin( fahrenheit_temperature);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}





int main(){
    cout<<"Hello Ronak"<<endl;
    double temp_frnht{135.23};
    temperature_conversion(temp_frnht);
    cout<<"Fahrenheit temperature in main is : "<<temp_frnht<<endl;
    
    return 0;
}
