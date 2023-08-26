#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main(){
char dubbed[200];
gets(dubbed);
bool istrue = true;
for(int i=0;i<strlen(dubbed);i++){
    if(dubbed[i]=='W'&& dubbed[i+1]=='U' && dubbed[i+2]=='B'){
        i= i+2;
        if(!istrue){
            printf(" ");
        }
        continue;
    }else{
        istrue = false;
        printf("%c",dubbed[i]);
    }
}

return 0;
}
