//7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
    char ip[5][20],str[5][20];
    int i,j,count=0;
    printf("Enter the list of ip addresses:");
    for(i=0;i<=4;i++)
        gets(ip[i]);
    for(i=0;i<=4;i++)
        for(j=0;j<=19;j++)
            str[i][j]=ip[i][j];
    printf("print valid ip addresses:\n");
    for(i=0;i<=4;i++)
    {
        count=0;
        char *a=strtok(ip[i],".");
        while(a!=NULL)
        {
            int x=atoi(a);
            if(x>=0&&x<=255)
                count++;
            a=strtok(NULL,".");
        }
        if(count==4)
            printf("%s\n",str[i]);
    }
    return 0;
}