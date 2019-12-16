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
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == '_'))
            {
                state=1;
            }
            else
            {
                state=2;
            }
            break;

        case 1:
            c=str[i];
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == '_'))
            {
                state=1;
            }
            else if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
            {
                state=1;
            }
            else
            {
                state=2;
            }
            break;
        case 2:
            printf("The string is not an identifier.");
            exit(0);

        }
    }
    if(state==1)
    {
        printf("The string is an identifier.");
    }
    else
    {
        printf("The string is not an identifier.");
    }
    return 0;

}
