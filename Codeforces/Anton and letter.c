#include<stdio.h>


int main(){

int i,count=0,rem,size1=1000,size2=123;
char line[size1];
gets(line);
int distrinctCount[size2];
for(i=0;i<size2;i++){
    distrinctCount[i] = 0;
}
for(i=0;line[i]!='\0';i++){
    rem = line[i];
    if(rem>=97 && rem<=122){
        distrinctCount[rem]= 1;
    }
}
for(i=97;i<=122;i++){
    if(distrinctCount[i]==1){
        count++;
    }
}
printf("%d",count);

return 0;
}
