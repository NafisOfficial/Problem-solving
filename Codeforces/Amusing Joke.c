#include<stdio.h>


int main(){
char s1[100],s2[100],s3[200];
gets(s1);
gets(s2);
gets(s3);
int len1 = strlen(s1);
int len2 = strlen(s2);
int len3 = strlen(s3);
int i,temp,counter[91],counter2[91];
for(i=0;i<92;i++){
    counter[i] = 0;
    counter2[i] = 0;
}
for(i=0;i<len1;i++){
    temp = s1[i];
    counter[temp]+=1;
}
for(i=0;i<len2;i++){
    temp = s2[i];
    counter[temp]+=1;
}
for(i=0;i<len3;i++){
    temp = s3[i];
    counter2[temp] +=1;
}
for(i=0;i<91;i++){
    if(counter2[i] != counter[i]){
        printf("NO");
        return 0;
    }
}
printf("YES");
return 0;
}
