#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]="23.134.54.13";
    char *a=strtok(ip,".");
    while(a!='\0')
    {
        int x=atoi(a);
        if(x>=0&&x<=255)
            printf("%d ",x);
        a=strtok('\0',".");
    }
    return 0;
}