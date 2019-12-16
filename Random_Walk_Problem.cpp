#include <iostream>
#include <string>

using namespace std;

int main()
{
    int rn;
    int x = 0;
    int y = 0;
    int steps;
    int sum = 0;

    cout<<"Enter total number of steps of a drunkard person:";
    cin>>steps;

    while(sum != steps)
    {
        cout<<"Take a random number between 0 and 9:";
        cin>>rn;

        if(rn == 0 || rn == 1 || rn == 2 || rn == 3 || rn == 4)
        {
            cout<<"\nForward"<<endl;
            y += 1;
        }
        else if(rn == 5 || rn == 6 || rn == 7)
        {
            cout<<"\nLeft"<<endl;
            x -= 1;
        }
        else if(rn == 8 || rn == 9)
        {
            cout<<"\nRight"<<endl;
            x += 1;
        }
        else
        {
            cout<<"Take a random number between 0 and 9"<<endl;
        }
        sum += 1;

    }

    cout<<"The final position of the drunkard person is:"<<x<<" "<<y;

    return 0;
}

