#include <string.h>
#include <iostream>

#include <map>

#include <utility>

using namespace std;

int main()

{

   map<int, string> Employees;

   // 1) Assignment using array index notation

   Employees[5234] = "harsh";

   Employees[3374] = "parth";

   Employees[1923] = "ankit.";

   Employees[7582] = "ronak";

   Employees[5328] = "hiten";

   cout << "Employees[3374]=" << Employees[3374] << endl << endl;

   cout << "Map size: " << Employees.size() << endl;

   cout << endl << "Natural Order:" << endl;

   for( map<int,string>::iterator it=Employees.begin(); it!=Employees.end(); ++it)

   {

       cout << (*it).first << ": " << (*it).second << endl;

   }

   cout << endl << "Reverse Order:" << endl;

   for( map<int,string>::reverse_iterator it=Employees.rbegin(); it!=Employees.rend(); ++it)

   {

       cout << (*it).first << ": " << (*it).second << endl;

   }

}
