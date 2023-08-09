    #include<stdio.h>

   void main()
  {
       int num,i;
       scanf("%d", &num);
       if(num<=1){
       printf("The number is not prime.\n");
      }
      for(i=2 ; i < num; i++){
                if(num%i==0){
                printf("The number is not prime.\n");
                break;
             }
     }
     if(i==num){
     printf("The number is prime.\n");
    }
    return 0;
 }

