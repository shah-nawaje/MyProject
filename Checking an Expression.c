#include<stdio.h>

int main()
{
    char str[300];
    int i;
    int j;
    int a;
    int b;
    int c;
    int d;
    int n=0;;

    printf("Enter an expression:");
    gets(str);
    for(i=0; str[i]!='\0'; i=i+2)
    {
        a = str[i];
        if((a >='A' && a <='Z') || (a >='a' && a <='z'))
        {
            b = str[i+1];
            if(b =='+' || b =='-' || b =='*' || b =='/' || b =='%' || b =='<' || b =='>')
            {
              n=1;
              if(str[i+2]=='\0')
              {
                  printf("It is not an expression.");
                  break;
              }
            }
            else if(b =='\0')
            {
                printf("It is an expression.");
                break;
            }
            else if(b ==')')
            {
                if(str[i+2]=='\0')
                {
                    printf("It is an expression.");
                    break;
                }
                c=str[i+2];
                if(c =='+' || c =='-' || c =='*' || c =='/' || c =='%' || c =='<' || c =='>')
                {
                    n=1;
                    if(str[i+3]=='\0')
                    {
                        printf("It is not an expression.");
                        break;
                    }
                    i=i+1;
                }
                else
                {
                    printf("It is not an expression.");
                    break;
                }
            }
            else if(b=='(')
            {
                 c=str[i+2];
                 if((c >='A' && c <='Z') || (c >='a' && c <='z'))
                 {
                   d = str[i+3];
                   if(d =='+' || d =='-' || d =='*' || d =='/' || d =='%' || d =='<' || d =='>')
                   {
                     n=1;
                     if(str[i+4]=='\0')
                     {
                        printf("It is not an expression.");
                        break;
                     }
                     i=i+1;
                   }
                   else
                   {
                     printf("It is not an expression.");
                     break;
                   }
                 }
                 else if(b =='0' || b =='1' || b =='2' || b =='3' || b =='4' || b =='5' || b =='6' || b =='7' || b =='8' || b =='9')
                 {
                   c = str[i+2];
                   if(c =='+' || c =='-' || c =='*' || c =='/' || c =='%' || c =='<' || c =='>')
                   {
                    n=1;
                   }
                   else
                   {
                     printf("It is not an expression.");
                     break;
                   }
                 }
                 else
                 {
                   printf("It is not an expression.");
                   break;
                 }
            }
            else
            {
                printf("It is not an expression.");
                break;
            }
        }
        else if(a =='0' || a =='1' || a =='2' || a =='3' || a =='4' || a =='5' || a =='6' || a =='7' || a =='8' || a =='9')
        {
            b = str[i+1];
            if(b =='+' || b =='-' || b =='*' || b =='/' || b =='%' || b =='<' || b =='>')
            {
              n=1;
            }
            else if(b=='\0')
            {
                printf("It is an expression.");
                break;
            }
            else if(b ==')')
            {
                if(str[i+2]=='\0')
                {
                    printf("It is an expression.");
                    break;
                }
                c=str[i+2];
                if(c =='+' || c =='-' || c =='*' || c =='/' || c =='%' || c =='<' || c =='>')
                {
                    n=1;
                    if(str[i+3]=='\0')
                    {
                        printf("It is not an expression.");
                        break;
                    }
                    i=i+1;
                }
                else
                {
                    printf("It is not an expression.");
                    break;
                }
            }
            else if(b=='(')
            {
                 c=str[i+2];
                 if((c >='A' && c <='Z') || (c >='a' && c <='z'))
                 {
                   d = str[i+3];
                   if(d =='+' || d =='-' || d =='*' || d =='/' || d =='%' || d =='<' || d =='>')
                   {
                     n=1;
                     if(str[i+4]=='\0')
                     {
                        printf("It is not an expression.");
                        break;
                     }
                     i=i+1;
                   }
                   else
                   {
                     printf("It is not an expression.");
                     break;
                   }
                 }
                 else if(b =='0' || b =='1' || b =='2' || b =='3' || b =='4' || b =='5' || b =='6' || b =='7' || b =='8' || b =='9')
                 {
                   c = str[i+2];
                   if(c =='+' || c =='-' || c =='*' || c =='/' || c =='%' || c =='<' || c =='>')
                   {
                    n=1;
                   }
                   else
                   {
                     printf("It is not an expression.");
                     break;
                   }
                 }
                 else
                 {
                   printf("It is not an expression.");
                   break;
                 }
            }
            else
            {
                printf("It is not an expression.");
                break;
            }
        }
        else if(a =='(')
        {
            b=str[i+1];
            if((b >='A' && b <='Z') || (b >='a' && b <='z'))
            {
                c = str[i+2];
                if(c =='+' || c =='-' || c =='*' || c =='/' || c =='%' || c =='<' || c =='>')
                {
                    n=1;
                    if(str[i+3]=='\0')
                    {
                        printf("It is not an expression.");
                        break;
                    }
                    i=i+1;
                }
                else
                {
                    printf("It is not an expression.");
                    break;
                }
            }
            else if(b =='0' || b =='1' || b =='2' || b =='3' || b =='4' || b =='5' || b =='6' || b =='7' || b =='8' || b =='9')
            {
               c = str[i+2];
                if(c =='+' || c =='-' || c =='*' || c =='/' || c =='%' || c =='<' || c =='>')
                {
                    n=1;
                    if(str[i+3]=='\0')
                    {
                        printf("It is not an expression.");
                        break;
                    }
                }
                else
                {
                    printf("It is not an expression.");
                    break;
                }
            }
            else
            {
                printf("It is not an expression.");
                break;
            }
        }
        else
        {
            printf("It is not an expression.");
            break;
        }
    }

    return 0;
}
