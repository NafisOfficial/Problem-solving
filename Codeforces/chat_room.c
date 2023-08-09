#include<stdio.h>
#include<string.h>
#define size 101


int main()
{
  char s[size];
  int i,len=0,count=0;
  scanf("%s",s);
  len=strlen(s);
  for(i=0;i<len;i++)
  {
    if(s[i]=='h' && count==0)
      count++;
    else if(s[i]=='e' && count==1)
      count++;
    else if(s[i]=='l' && count==2)
      count++;
    else if(s[i]=='l' && count==3)
      count++;
    else if(s[i]=='o' && count==4)
      count++;
  }
  if(count==5)
    printf("YES");
  else 
    printf("NO");

  return 0;

}