//1. Write a program to find the number of vowels in each of the 5 strings stored in two 
//   dimensional arrays, taken from the user.
#include<stdio.h>
int main()
{
    char str[5][10];
    int i,count=0,j;
    printf("Enter 5 strings:");
    for(i=0;i<=4;i++)
        fgets(str[i],10,stdin);
    for(i=0;i<=4;i++)
    {
        count=0;
        for(j=0;j<=9;j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
                count++;
        }
        printf("number of vowels in %d string is: %d\n",i+1,count);
    }
    return 0;
}