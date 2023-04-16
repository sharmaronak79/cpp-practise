//Pyramid Assignment
//Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
//
//Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
//
//It's much easier to understand the Letter Pyramid given examples.
//
//If the user enters the string "ABC", then your program should display:

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string data;
    cout<<"Enter the data : ";
    getline(cin,data);
    
    size_t length_of_data = data.length();
    int position{0};
    
    for(char c: data){
        
      size_t num_space = length_of_data - position;
        while(num_space > 0){
            cout<<" ";
            num_space--;
        }
        
        //Display in order up to the current character
        for(size_t j=0; j< static_cast<size_t>(position);j++){
            cout<<data.at(j);
        }
        
        //Display the current 'centre' character
        cout<<c;
        
        //Display the remaining characters in reverse order
        for(int j=position-1;j>=0;--j){
            //You can use this line to get rid of the size_t vs int warning if you want
            auto k= static_cast<size_t>(j);
            cout<<data.at(k);            
        }
        
        cout<<endl;
        position++;
    }
    

    
    
    
    return 0;
}