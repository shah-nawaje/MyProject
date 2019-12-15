#include<stdio.h>

int main()
{
    char str[300];
    char c;
    int i;
    int state=0;

    printf("Enter a string:");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        switch(state)
        {
        case 0 :
            c=str[i];
            if(c =='a')
            {
                state=1;
            }
            else if(c =='b')
            {
                state=0;
            }
            else
            {
                state=3;
            }
            break;

        case 1:
            c=str[i];
            if(c =='a')
            {
                state=1;
            }
            else if(c =='b')
            {
                state=2;
            }
            else
            {
                state=3;
            }
            break;

        case 2:
            c=str[i];
            if(c =='a')
            {
                state=1;
            }
            else if(c =='b')
            {
                state=0;
            }
            else
            {
                state=3;
            }
            break;

        case 3:
            printf("The string is not accepted.");
            exit(0);

        }
    }
    if(state==2)
    {
        printf("The string is accepted.");
    }
    else
    {
        printf("The string is not accepted.");
    }
    return 0;

}
