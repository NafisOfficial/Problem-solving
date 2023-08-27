#include<stdio.h>
#include<stdbool.h>


int main(){
char w[100];
bool isFalse = false;
gets(w);
int i,len = strlen(w);
for(i=0;i<len;i++){
    if(i>0 && w[i]>=97){
        isFalse = true;
    }
}
if(isFalse==true){
    for(i=0;i<len;i++){
        printf("%c",w[i]);
    }
}else{
    for(i=0;i<len;i++){
        if(w[i]<97){
            w[i] = w[i] + 32;
            printf("%c",w[i]);
        }
        else{
            w[i] = w[i] - 32;
            printf("%c",w[i]);
        }
    }
}
return 0;
}
