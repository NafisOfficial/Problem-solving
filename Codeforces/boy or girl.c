#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
    char name[size];
    gets(name);
    int len=0;
    len = strlen(name);
    if (len%2 !=0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");

    return 0;
}
