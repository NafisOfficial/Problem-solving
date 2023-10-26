#include<stdio.h>


int main(){
long long int n,m,k,result=0,remain=0;
scanf("%lld%lld%lld",&n,&m,&k);
if(n<m){
    if(n<k){
        printf("%lld",n);
        return 0;
    }else{
        result = k;
        printf("%lld",result);
        return 0;
    }
}else{
    if(m<k){
        result = m;
        n = n-m;
        k = k-m;
        remain = n/2;
        if(remain<k){
            result = result + remain;
        }else{
            result = result + k;
        }
        printf("%lld",result);
        return 0;
    }else{
        result = k;
        printf("%lld",result);
        return 0;
    }
}

}
