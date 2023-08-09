#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
    {
        printf("YES");
    }
    else
    {
        while (n!=0)
        {
            a=n%10;
            n=n/10;
            if(n>=10)
            {
                if(a!=7 && a!=4)
                {
                    printf("NO");
                    break;
                }
            }
            else if(n<10)
            {
                if(a==7 || a==4 )
                {
                    if(n != 7 && n!= 4)
                    {
                        printf("NO");
                        break;
                    }
                    else
                    {
                        printf("YES");
                        break;
                    }
                }
                if(a!=7 && a!=4)
                {
                    printf("NO");
                    break;
                }


            }
        }
        
        
    }
}