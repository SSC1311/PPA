#include<iostream>
using namespace std;

#pragma pack(1)
class Demo 
{
    public:
        int i;
        char ch;
        
    private:
        float f; // f is a private member

};


int main()
{
    Demo dobj;

    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 3.14;

    cout<<dobj.i<<"\n";
    cout<<dobj.ch<<"\n";
    cout<<dobj.f<<"\n"; // Main Function is trying to access private member    
    return 0;
}