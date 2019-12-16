#include <iostream>

using namespace std;


int main()
{
    int a;
    int m;

    int r[100];
    r[0]=1;
    int n;

    cout<<"\nEnter value of a:";    // a = 13
    cin>>a;
    cout<<"\nEnter value of m:";    // m = 19
    cin>>m;
    cout<<"\nhow many Random numbers do you want to generate ?:";
    cin>>n;


    for(int i=0; i<n; i++)
    {
        r[i+1]=((a *(r[i])) % m);

        cout<<"r["<<i+1<<"]:"<<r[i+1]<<endl;
    }

    return 0;
}
