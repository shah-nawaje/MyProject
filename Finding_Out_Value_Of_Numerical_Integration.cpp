#include <iostream>
#include <string>

using namespace std;

int main()
{
    float b;
    float a;
    int n;
    int p;
    float w = 1;
    float x = 1;
    float I;

    cout<<"Enter the value of b:";       // b = 5
    cin>>b;
    cout<<"\nEnter the value of a:";       // a = 2
    cin>>a;
    cout<<"\nEnter the power of x:";
    cin>>n;

    p = n + 1;

    for(int i=0; i<p; i++)
    {
        w = w * b;
        x = x * a;
    }

    I = ((w - x)/4);

    cout<<"\nThe result of Numerical Integration is "<<I;

    return 0;
}
