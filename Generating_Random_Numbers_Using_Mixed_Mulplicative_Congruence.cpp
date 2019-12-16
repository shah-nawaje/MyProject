#include <iostream>

using namespace std;


int main()
{
    int a;
    int b;
    int m;
    int r[100];
    r[0]=1;
    int n;

    cout<<"Enter value of a:";      // a = 13
    cin>>a;
    cout<<"\nEnter value of b:";    // b = 1
    cin>>b;
    cout<<"\nEnter value of m:";    // m = 19
    cin>>m;
    cout<<"\nhow many Random numbers do you want to generate ?:";
    cin>>n;


    for(int i=0; i<n; i++)
    {
        r[i+1]=(((a*r[i]) + b ) % m);

        cout<<"r["<<i+1<<"]:"<<r[i+1]<<endl;
    }

    return 0;
}
