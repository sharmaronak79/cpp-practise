//Good challenge pracrtise
//Thisn can be done using if else and lader if else, which reduce the code size s well
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Hello Ronak\n-----------------------------\nIts Time for A Challenge"<<endl;
    char selection{};
    vector<int> vec;
    
    do{
    cout<<"\n"<<endl;
    cout<<"p - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the number"<<endl;
    cout<<"S - Display the smallest number "<<endl;
    cout<<"L - Display the Largest number "<<endl;
    cout<<"Q - Quit\n"<<endl;
    cout<<"Enter your Choice: ";
    cin>>selection;
    
    switch(selection){
        case 'p':
        case 'P':
            if(vec.size()==0){
                cout<<"[] - the list is empty";
            }else{
                cout<<"[ ";
                for(auto v : vec)
                    cout<<v<<" ";
                cout<<"]";
            }
            
            break;
        case 'a':
        case 'A':
            int num;
            cout<<"Enter the number that you want to add : ";
            cin>>num;
            vec.push_back(num);
            cout<<num<<" added";
            break;
        case 'm':
        case 'M':
            if(vec.size()==0){
                cout<<"Unable to calculate the mean - no data";
            }else{
                int sum{};
                
                for(auto v : vec)
                    sum += v;
                
                cout<<"mean of the list is : "<<static_cast<double>(sum)/vec.size();
            }
            break;
        case 's':
        case 'S':
            if(vec.size()==0){
                cout<<"Unable to determine the smallest number - no data";
            }else{
                int smallest{};
                smallest=vec.at(0);
                for(auto v:vec){
                  if(v<smallest){
                      smallest=v;
                  }
                }
                cout<<"The smallest number is "<<smallest;
            }
            break;
        case 'l':
        case 'L':
            if(vec.size()==0){
                cout<<"Unable to determine the largest number - no data";
            }else{
                int largest{};
                largest=vec.at(0);
                for(auto v:vec){
                  if(v>largest){
                      largest=v;
                  }
                }
                cout<<"The largest number is "<<largest;
            }
            break;
        case 'q':
        case 'Q':
            cout<<"Goodbye";
            break;
         
        default:
        
            cout<<"Unknown selection, please try again";
    }
    
    }while(!(selection == 'q' || selection == 'Q'));
    
    //cout<<"Goodbye";
        
    return 0;
}
