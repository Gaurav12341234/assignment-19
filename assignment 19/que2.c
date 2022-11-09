//2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][10],temp[10];
    int i,j,k,result;
    printf("Enter 10 city name:");
    for(i=0;i<=9;i++)
        fgets(str[i],10,stdin);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            result=strcmp(str[i],str[j]);
            if(result==1)
            {
                for(k=0;k<=9;k++)
                {
                    temp[k]=str[i][k];
                    str[i][k]=str[j][k];
                    str[j][k]=temp[k];

                }
                /*strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);*/
            }
        }
    }
    printf("sorted strings are:\n\n");
    for(i=0;i<=9;i++)
        printf("%s",str[i]);
    return 0;
}