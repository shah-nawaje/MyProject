#include<stdio.h>

int main()
{
    char str[300];
    char c;
    int i;
    int n = 0;

    printf("Enter a string:");
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        c=str[i];
        if(c== ' ')
        {
           n=n+1;
        }
        i++;
    }
    printf("The number of spaces in the string is %d.", n);
    return 0;
}
