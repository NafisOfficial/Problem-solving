#include<stdio.h>



int main(){
int n,count=0,a,h;
scanf("%d",&n);
int home[n],away[n];

for(int i=0;i<n;i++){
    scanf("%d%d",&a,&h);
    home[i]=a;
    away[i]=h;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(home[i]==away[j]){
            count+=1;
        }
    }
}
printf("%d",count);
return 0;
}
