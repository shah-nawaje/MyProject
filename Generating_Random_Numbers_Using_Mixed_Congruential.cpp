#include <iostream>

using namespace std;


int main()
{
    int a;
    int b;
    int m;     // value of constant m will not be given

    int r[100];
    r[0]=11;
    int n;
    int upper_range;
    int lower_range;

    cout<<"Enter the range of Random numbers to be generated:"<<endl;
    cout<<"Upper range:";
    cin>>upper_range;
    cout<<"\nLower range:";
    cin>>lower_range;

    m = (upper_range - lower_range) + 1;

    cout<<"\nEnter value of a:";      // a = 13
    cin>>a;
    cout<<"\nEnter value of b:";    // b = 15
    cin>>b;

    cout<<"\nhow many Random numbers do you want to generate ?:";
    cin>>n;


    for(int i=0; i<n; i++)
    {
        r[i+1]=(((a*r[i]) + b ) % m);

        cout<<"r["<<i+1<<"]:"<<r[i+1]<<endl;
    }

    return 0;
}
