#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;

        // Default Constructor
        PPA()
        {
            cout<<"Inside Default Constructor\n";
        }

        // Parametrised Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parametrised Constructor\n";
        }

        // Copy Constructor
        PPA(PPA &obj)
        {
            cout<<"Inside Copy Constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }

        
};

int main(){

    PPA pobj1;              // Default 
    PPA pobj2(11,21);       // Parametrised
    PPA pobj3(pobj1);       // Copy

    return 0;
}