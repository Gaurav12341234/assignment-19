//9. Write a program that asks the user to enter a username. If the username entered is 
//   one of the names in the list then the user is allowed to calculate the factorial of a 
//   number. Otherwise, an error message is displayed.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    char s[20];
    int i,n,fact=1,result;
    printf("list of strings are:");
    for(i=0;i<=4;i++)
        fgets(str[i],20,stdin);
    printf("Enter a Username:");
    fgets(s,20,stdin);
    for(i=0;i<=4;i++)
    {
        result=strcmp(str[i],s);
        if(result==0)
        {
            printf("Enter a number:");
            scanf("%d",&n);
            while(n>=1)
            {
                fact=fact*n;
                n--;
            }
            printf("Factorial is %d",fact);
            break;
        }
    }
    if(i==5)
        printf("Error!");
    return 0;
}
