#include<stdio.h>


int main(){
int n,E,O,result,Ecount=0,Ocount=0;
scanf("%d",&n);
int num[n];
for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
        if(num[i]%2==0){
            Ecount +=1;
            E = num[i];
        }else{
            Ocount +=1;
            O = num[i];
        }
}
if(Ecount==1){
    for(int i=0;i<n;i++){
        if(E==num[i]){
            printf("%d",i+1);
        }
    }
}else{
    for(int i=0;i<n;i++){
        if(O==num[i]){
            printf("%d",i+1);
        }
    }
}
return 0;
}
