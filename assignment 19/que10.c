//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][2][10];
    char temp[2][10];
    int i,j,flag=0;
    printf("Enter the list of usernames and passwords:");
    for(i=0;i<=2;i++)
        for(j=0;j<=1;j++)
            fgets(str[i][j],10,stdin);
    printf("Enter valid username and password:");
    for(i=0;i<=1;i++)
        fgets(temp[i],10,stdin);
    printf("Authentication system:");
    for(i=0;i<=2;i++)
    {
       if(strcmp(str[i][0],temp[0])==0&&strcmp(str[i][1],temp[1])==0)
       {
               printf("login is succesful");
               flag=1;
       }
    }
    if(flag==0)
            printf("Username and password not matched");
    return 0;
}