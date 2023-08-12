#include<stdio.h>



int main(){

    int n,i,j,count=0,rem;
    scanf("%d",&n);
    char textline[n];
    int Arr[123];
    scanf("%s",&textline);
    for(i=0;i<n;i++){
        if(textline[i]<97){
            textline[i] = textline[i]+32;
        }
    }
    for(i=0;i<n;i++){
        rem = textline[i];
        Arr[rem] = 1;
    }
    for(i=0;i<123;i++){
        if(Arr[i]==1){
            count++;
        }
    }
    if(count-1==26){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;

}
