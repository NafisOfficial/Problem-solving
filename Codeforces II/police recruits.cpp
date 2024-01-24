#include<bits/stdc++.h>

using namespace std;

int main(){
int n,x,c=0,rem=0;
cin >> n;
for(int i=0;i<n;i++){
    cin >> x;
    if(x==-1 && rem>0){
        rem = rem -1;
    }else if(x>0){
        rem +=x;
    }
    else{
        c+=1;
    }
}

cout << c;

return 0;
}
