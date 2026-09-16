#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    float cal;

    cout<<"enter ur 1st angle:\n";
    cin>>a;

    cout<<"enter ur 2nd angle:\n";
    cin>>b;
    
    cout<<"enter ur 3rd angle:\n";
    cin>>c;

    cal=a+b+c;
   

    if(cal==90)
    {
        cout<<"this is right angle trangle\n";

    }
    else if(cal<=45)
    {
        cout<<"this is acute angle traingle\n";

    }
    else
    {
        cout<<"this is wide angle traingle\n";
    }
return 0;
}