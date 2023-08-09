#include<stdio.h>
#include<string.h>


int main()
{
  char num[100]={"2+2+1+3+1+2+1"};
    int l,i;
    l= strlen(num);
    for(i=0;i<l;i++)
    {
        if(num[i]=='1')
        {
            printf("1");
        }
        if(i>0 && i%2 !=0)
          {
            printf("+");
          }
    }
    for(i=0;i<l;i++)
    {
        if(num[i]=='2')
        {
            printf("2");
        }
        if(i>0 && i%2 !=0)
          {
            printf("+");
          }
    }
    for(i=0;i<l;i++)
    {
        if(num[i]=='3')
        {
            printf("3");
        }
        if(i>0 && i%2 !=0)
          {
            printf("+");
          }
    }
    return 0;
}
