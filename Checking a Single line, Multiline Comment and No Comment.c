#include<stdio.h>

int main()
{
    char str[300];
    int a=0;
    int i;
    int j;
    int k;
    int n=0;
    int m=0;

    printf("Enter a some texts:");
    gets(str);
    for(i=a; str[i]!='\0'; i++)
    {
      if(str[i]=='/')
      {
          if(str[i+1]=='*')
          {
              for(j=i+2; str[j]!='\0'; j++)
              {
                 if(str[j]=='*')
                 {
                     if(str[j+1]=='/')
                     {

                         n=n+1;
                         a=j+2;
                         break;
                     }
                     else
                     {
                         m=1;
                         break;
                     }
                 }
              }
              if(m==1)
              {
                  break;
              }
          }
          else
          {
              if(m==1)
              {
                  break;
              }
          }
      }
      else
      {
          continue;
      }
    }
    if(n==0)
    {
       printf("There is no comment.");
    }
    else if(n==1)
    {
       printf("There is a single comment.");
    }
    else
    {
       printf("There are multi comments.");
    }
    return 0;
}
