#include<stdio.h>
#include<string.h>
#define size 100

int main()
{
  char name[size];
  int i,length,count=0,j=0;
  gets(name);
  length= strlen(name);
  char result[length];
  for(i=0;i<length;i++)
  {
    if(name[i]>='A' && name[i]<='Z')
    {
        if(name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' && name[i] != 'U' && name[i] != 'Y')
        {
            result[j]='.';
            printf("%c",result[j]);
            j++;
            result[j]=name[i]+32;
            printf("%c",result[j]);
            j++;
        }
    }

    if(name[i]>='a' && name[i]<='z')
    {
        if(name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u' && name[i] != 'y')
        {
            result[j]='.';
            printf("%c",result[j]);
            j++;
            result[j]=name[i];
            printf("%c",result[j]);
            j++;
        }
    }
  }
  return 0;
}
