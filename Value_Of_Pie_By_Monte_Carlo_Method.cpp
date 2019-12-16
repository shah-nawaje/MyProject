#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    float m = 0;
    float n;
    float r1;
    float r2;
    int sum = 0;
    float root;
    float pie;
    float a = 4;

    cout<<"Enter the number of trials:";
    cin>>n;

    while(sum != n)
    {
        cout<<"Enter a pair of random numbers between 0 and 1:";
        cin>>r1>>r2;

        root = sqrt(1 - (r1*r1));

        if(r2 <= root)
        {
            cout<<"\nThe point lies inside the quardent"<<endl;
            m += 1;
        }
        else
        {
            cout<<"\nThe point lies outside the quardent"<<endl;
        }

        sum += 1;

    }

    pie = ((m/n)*a);

    cout<<"\nValue of Pie by Monte Carlo Method is:"<<pie;

    return 0;
}
