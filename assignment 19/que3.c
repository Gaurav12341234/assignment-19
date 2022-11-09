//3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main()
{
    char str[5][10];
    int i;
    printf("Enter 5 strings:");
    for(i=0;i<5;i++)
        fgets(str[i],10,stdin);
    printf("Display 5 strings:\n");
    for(i=0;i<5;i++)
        printf("%s",str[i]);
    return 0;
}