#include <iostream>

using namespace std;

int main()
{
    char rn;
    int H = 0;
    int T = 0;
    int D;
    int sum = 0;
    int win;
    int loss;
    bool vari = true;      // Differece of Head tossed and Tail tossed

    while(vari)
    {
        cout<<"Take a Random Number between 0 to 9:";
        cin>>rn;
        if(rn == '0' || rn == '1' || rn == '2' || rn == '3' || rn =='4' || rn =='5' || rn =='6' || rn == '7' || rn == '8' || rn == '9')
        {
             if(rn == '0' || rn == '1' || rn == '2' || rn == '3' || rn == '4')
             {
               cout<<"\nThis is Head"<<endl;
               H += 1;
               cout<<" H ="<<H;
             }
            else
             {
                cout<<"\nThis is Tail"<<endl;
               T += 1;
               cout<<" T ="<<T;
             }

             sum += 1;
             cout<<" sum = "<<sum;
             D = (H - T);
             cout<<" D = "<<D;

             if(D == 3 || D == -3)
                break;
        }
        else
        {
            cout<<"\nEnter a number between 0 and 9";
        }

    }

    if(sum < 8)
    {
        win = 8 - sum;
        cout<<"\nYou won Re."<<win;
    }
    else
    {
        loss = sum - 8;
        cout<<"\nYou lose Re."<<loss;
    }

    return 0;
}
