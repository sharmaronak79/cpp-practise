#include<iostream>
using namespace std;

class Course
{
    public:
    void displayname(string name)
    {
        cout<<" well Come to the "<<name<<" course"<<endl;
    }
    void displaysem(int sem)
    {
        cout<<"you will sudy "<<sem<<" semesters in this course"<<endl;
    }

};

int main()
{
    Course co;
    string n;
    int s;
    cout<<"welcome to the Lambton college "<<endl;
    cout<<"which course u want to study?"<<endl;
    cin>>n;
    cout<<"howmany sEmesters u want?"<<endl;
    cin>>s;
    co.displayname(n);
    co.displaysem(s);
    return 0;
    }
