//4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    char temp[10];
    int i,result;
    printf("Enter 5 strings:");
    for(i=0;i<=4;i++)
        fgets(str[i],10,stdin);
    printf("Search a string:");
    fgets(temp,10,stdin);
    for(i=0;i<=4;i++)
    {
        result=strcmp(str[i],temp);
        if(result==0)
        {
            printf("Yes! search string is in the list of string");
            break;
        }
    }
    if(i==5)
        printf("No! search string is not in the list of string");
    return 0;
}