#include<stdio.h>

int main()
{
    char str[300];
    char str1[300];
    int i;
    int j;
    int k;
    int l;
    int m;
    int n=0;

    printf("Enter a some lines:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
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
                            for(k=0; str[k]!='\0'; k++)
                            {
                                if(str[k]=='/')
                                {
                                    if(str[j+2]!='\0')
                                    {
                                        for(m=j+2,l=k; str[m]!='\0'; m++,l++)
                                        {
                                           str1[l]=str[m];
                                        }
                                        str1[l]='\0';
                                        n=1;
                                        printf("\n %s",str1);
                                        break;
                                    }
                                    else
                                    {
                                        str1[k]='\0';
                                        n=1;
                                        printf("\n %s",str1);
                                        break;
                                    }
                                }
                                str1[k]=str[k];

                            }
                        }
                        else
                        {
                            printf("There is no comment.");
                            n=1;
                            break;
                        }
                    }
                }
                break;
            }
            else
            {
                printf("There is no comment.");
                n=1;
                break;
            }
        }

    }
    if(n==0)
    {
        printf("There is no comment.");
    }

    return 0;
}
