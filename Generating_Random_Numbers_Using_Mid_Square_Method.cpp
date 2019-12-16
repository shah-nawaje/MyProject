#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    int seed;
    int sqrt_seed;
    int n;
    int size;
    int value;

    string str;
    char str1[50];
    ostringstream obj;

    cout<<"Enter a SEED NUMBER:";
    cin>>seed;
    cout<<"How many times do you want to generate Random Number from this Seed ?:";
    cin>>n;

    for(int i=0; i<n; i++)
    {

        sqrt_seed = (seed * seed);

        obj<<sqrt_seed;
        str = obj.str();
        size = str.size();

        if(size == 8)
        {
            str[0]=str[2];
            str[1]=str[3];
            str[2]=str[4];
            str[3]=str[5];
            str[4]='\0';
            str[5]='\0';
            str[6]='\0';
            str[7]='\0';
        }
        else if (size == 7)
        {

            str[0]=str[1];
            str[1]=str[2];
            str[2]=str[3];
            str[3]=str[4];
            str[4]='\0';
            str[5]='\0';
            str[6]='\0';
        }
        else
        {
            str[0]=str[1];
            str[1]=str[2];
            str[2]=str[3];
            str[3]=str[4];
            str[4]='\0';
            str[5]='\0';
        }

        str1[0]=str[0];
        str1[1]=str[1];
        str1[2]=str[2];
        str1[3]=str[3];
        str1[50]='\0';

         str.clear();    // str = "" or str.clear(); to make it empty
         obj.str("");   // obj.str("") or obj.str(std::string()) or obj = std::stringstream(); to make stringstream empty

        stringstream(str1)>>seed;

        cout<<seed<<endl;

    }

    return 0;

}
