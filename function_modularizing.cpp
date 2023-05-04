
#include <iostream>
#include <string>
#include<vector>

using namespace std;

void display_menu(void);
char get_selection(void);

void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool Find(const vector<int> &v, int target);


int main()
{
    
    cout<<"Hello Ronak\n\r";
    
    std::vector<int > numbers;
    char selection{};
    
    do{
        display_menu();
        selection = get_selection();
        switch(selection){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
            
        }
        
    }while(selection != 'Q');
    
    cout<<endl;

    return 0;
}

void display_menu(){
    cout<<"\nP - Print numbers"<<endl;
    cout<<"A - Add numbers"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest numbers"<<endl;
    cout<<"F - Find the numbr in a List"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<"\nEnter your Choice : ";
}

char get_selection(){
  char s;
    cin>>s;
    
    return toupper(s);
}

void handle_display(const vector<int> &v){
    if(v.size() == 0){
        cout<< "[] - the list is Empty"<<endl;
    }else{
        display_list(v);
    }
}

void display_list(const vector<int> &v){
    cout<<"[";
    for(auto num:v){
        cout<<num<<" ";
    }
    cout<<"]"<<endl;
}

void handle_add(vector <int> &v){
    int num_to_add{};
    cout<<"Enter a number to add to the List : ";
    cin>>num_to_add;
    v.push_back(num_to_add);
    cout<<num_to_add<< " added"<<endl;
}

void handle_mean(const vector<int> &v){
    if(v.size() == 0){
        cout<<"Unable to calculate the mean - list is Empty"<<endl;
        
    }else{
        cout<<"The mean is "<< calculate_mean(v)<<endl;
    }
} 

double calculate_mean(const vector<int> &v){
    int total{};
    for(auto num :v){
        total += num;
    }
    return static_cast<double> (total)/v.size();
}

void handle_smallest(const vector<int> &v){
    
    if(v.size() == 0){
        cout<<"List is empty cannot find the smallest number"<<endl;
    }else{
        
        cout<<"The smallest number is "<<get_smallest(v)<<endl;
    }
}

int get_smallest(const vector<int> &v){
    int smallest = v[0];
    
    for(auto num:v){
        if(num < smallest){
            smallest=num;
        }
    }
    return smallest;
}

void handle_largest(const vector<int> &v){
    
    if(v.size() == 0){
        cout<<"List is empty cannot find the largest number"<<endl;
    }else{
        
        cout<<"The largest number is "<<get_largest(v)<<endl;
    }
}

int get_largest(const vector<int> &v){
    int largest = v[0];
    
    for(auto num:v){
        if(num > largest){
            largest=num;
        }
    }
    return largest;
}

void handle_quit(){
    cout<<"Good Bye...."<<endl;
}

void handle_unknown(){
    cout<<"You Entered something Wrong- Please try again..."<<endl;
}

void handle_find(const vector<int> &v){
    int target{};
    cout<<"Enter the number to find : ";
    cin>>target;
    
    if(Find(v,target)){
        cout<<target<<" is found";
    }else{
        cout<<target<<" is not Found"<<endl;
    }
}


bool Find(const vector<int> &v, int target){
    for(auto num:v){
        if(num == target)
            return true;
        
    }
    return false;
}
