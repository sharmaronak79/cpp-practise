#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
 {
     /*to creat a file name example and if it is created then it will be proceed to write some thing in that */
  ofstream myfile ("example.txt");
  if (myfile.is_open())
  {
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile << "i am new to fstream.\n";
    myfile.close();
  }
  else cout << "Unable to open file";
   
    
  
  return 0;
}