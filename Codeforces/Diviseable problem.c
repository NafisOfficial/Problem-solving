#include<stdio.h>

int main(){

int n,moves=0,i,rem;
scanf("%d",&n);
 int arr[n];
for(i=0;i<n;i++){
    long long int a , b;
    scanf("%lld%lld",&a,&b);
    rem = a%b;
    arr[i]=rem ;
  }
  for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
  }
}

