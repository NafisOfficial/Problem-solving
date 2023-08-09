#include<stdio.h>

int main()
{
    char c[100];
    int vowel=0,consonat=0,i=0,lower_case,upper_case;
    printf("Enter a text: ");
    gets(c);

    while(c[i] != '\0')
    {
        if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z'))
        {
            if( c[i]=='a' || c[i]=='A' || c[i]=='e' || c[i]=='E' ||c[i]=='i' || c[i]=='I' ||
               c[i]=='o' || c[i]=='O' ||c[i]=='u' || c[i]=='U' )
            {
                vowel++;
            }
            else
            {
                consonat++;
            }
        }
        i++;
    }
    printf("\nVowel is = %d\n",vowel);
    printf("Consonant is = %d",consonat);
}
