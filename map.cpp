#include<iostream>
#include<map>
#include<iterator>

using namespace std;
map<int,string>::iterator iter;

void printmap(map<int,string> my_map)
{
    for(iter=my_map.begin();iter != my_map.end();iter++)
    {
        cout<<iter->first<< "=" <<iter->second<<endl;
    }}


int main()
{
    map<int,string> my_map;
    
    my_map[1]="rOnak ";
    my_map[2]="hardik";
    my_map[3]="ankur";
    my_map[4]="harshik";
    my_map[5]="sahdev";
    my_map[6]="piyush";
    //to print single element by key 
    cout<<my_map[3]<<endl;
    //printing whole map keys and values using iterator 
    for(iter=my_map.begin();iter != my_map.end();iter++)
    {
        cout<<iter->first<< "=" <<iter->second<<endl;
    }
    //insert function in maps
    my_map.insert(pair<int,string>(9,"unknown"));
    
    printmap(my_map);
    
    //find function 
    iter=my_map.find(4);
    cout<<"key found = "<<iter->first<<" - " <<iter->second<<endl;
    
    //the size of the map 
    cout<<"the size of the map is = " <<my_map.size();
    
    
    return 0;
    
}
