#include<stdio.h>
#include<string.h>

#define size 1000

int main()
{
    char word[size];
    int rem;
    gets(word);

    if(word[0]>='a' && word[0] <='z')
    {
        rem= word[0] - 32;
        word[0]=rem;
    }
    printf("%s",word);

    return 0;
}
