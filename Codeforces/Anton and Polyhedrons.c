#include<stdio.h>


int main(){
int n,i,face=0;
scanf("%d",&n);
char shape[15];
for(i=0;i<=n;i++){
    gets(shape);
    if(strcmp(shape,"Tetrahedron")==0){
        face = face+4;
    }else if(strcmp(shape,"Cube")==0){
        face = face + 6;
    }else if(strcmp(shape,"Octahedron")==0){
        face = face + 8;
    }else if(strcmp(shape,"Dodecahedron")==0){
        face = face + 12;
    }else if(strcmp(shape,"Icosahedron")==0){
        face = face + 20;
    }
}
printf("%d",face);
return 0;
}
