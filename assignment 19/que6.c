//6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    int i,j,l;
    printf("Enter 5 strings:");
    for(i=0;i<=4;i++)
        fgets(str[i],20,stdin);
    printf("Strings which are palindrome:\n");
    for(i=0;i<=4;i++)
    {
        l=strlen(str[i])-1;
        for(j=0;j<l/2;j++)
        {
            if(str[i][j]!=str[i][l-j-1])
                break;
        }
        if(j==l/2)
            printf("%s",str[i]);
    }
    return 0;
}