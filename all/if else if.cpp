#include <iostream>
using namespace std;

// electricity bill 
int main()
{
    float unit;

    cout<<"enter ur electicity units :\n";
    cin>>unit;

    if(unit>=0 && unit<=100)
    {
        cout<<"pay 5rs\n";
    }
    else if(unit>=101 && unit<=200)
    {
        cout<<"pay 10rs\n";
    }
    else if(unit>=201 && unit<=300)
    {
        cout<<"pay 15rs\n";
    }
    else
    {
        cout<<"pay more then 15rs\n";
    }
    
return 0;
}