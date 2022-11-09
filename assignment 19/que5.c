//5. Suppose we have a list of email addresses, check whether all email addresses have 
//   ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    int i,j,l;
    printf("Enter 5 email addresses:");
    for(i=0;i<=4;i++)
        fgets(str[i],20,stdin);
    printf("Email addresses which not have @ in it:\n");
    for(i=0;i<=4;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if(str[i][j]=='@')
                break;
        }
        if(str[i][j]=='\0')
            printf("%s",str[i]);
        /*for(i=0;i<=4;i++)
        if(strchr(str[i],'@')==0)
            printf("%s",str[i]);*/
    }
    return 0;
}