#include<stdio.h>
#include<string.h>
int main()
{
    int arr[200];
    char str[5];
    int i,l,result,max;
    printf("Enter heights of an alphabets:");
    for(i=97;i<=122;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a word:");
    scanf("%s",str);
    l=strlen(str);
    printf("\nLength of word is %d\n",l);
    max=arr[str[0]];
    for(i=1;str[i];i++)
    {
        if(max<arr[str[i]])
            max=arr[str[i]];
    }
    result=max*l;
    printf("Ans is %d",result);
    return 0;
}