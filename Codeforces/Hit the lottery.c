#include<stdio.h>


int main(){
int n,result=0,rem;
scanf("%d",&n);
if(n>=100){
    result = n/100;
    n = n%100;
}
if(n>=20){
    result = result + n/20;
    n = n%20;
}
if(n>=10){
    result = result + n/10;
    n = n%10;
}
if(n>=5){
    result = result + n/5;
    n = n%5;
}
result = result+n;
printf("%d",result);

}
