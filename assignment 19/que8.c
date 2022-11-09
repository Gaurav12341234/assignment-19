//8. Given a list of words followed by two words, the task is to find the minimum distance 
//   between the given two words in the list of words.
//   (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//    word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10];
    char word1[10],word2[10];
    int i,cnt1=0,cnt2=0,result=0;
    printf("Enter list of words:");
    for(i=0;i<=4;i++)
        fgets(str[i],10,stdin);
    printf("Enter a word1:");
        fgets(word1,10,stdin);
    printf("Enter a word2:");
        fgets(word2,10,stdin);
    printf("minimum distance between two words is:");
    for(i=0;i<=4;i++)
    {
        if(strcmp(str[i],word1)==0)
            cnt1=i;
        if(strcmp(str[i],word2)==0)
            cnt2=i;
    }
    cnt1>=cnt2?result=cnt1-cnt2-1:(result=cnt2-cnt1-1);
    if(result>=0)
        printf("%d",result);
    else
        printf("Invalid input word");
    return 0;
}