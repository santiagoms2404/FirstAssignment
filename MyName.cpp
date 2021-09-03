//This code will print the name of the user "n" times

#include <iostream>
using namespace std;

class MyName
{
    public:
    string Name;
    int Repeat;

};

int main()

{
    MyName EnterName, Ntimes;

    cout << "Enter your  name \n";
    cin >> EnterName.Name;
    cout << "Enter how many times do you want to repeat your name " << EnterName.Name << endl;
    cin >> Ntimes.Repeat;

    for (int i = 0; i < Ntimes.Repeat; i++)
    {
        cout << EnterName.Name << endl;
    }
    
}
    

