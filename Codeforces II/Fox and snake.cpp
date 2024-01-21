#include<bits/stdc++.h>

using namespace std;


int main(){
int n,m,c=0;
cin >> n >> m;
for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout << "#";
            }
        }else{
            ++c;
            for(int j=0;j<m;j++){
                if(j==0 && c%2==0){
                cout << "#";

            }else if(j+1==m && c%2!=0){
                cout << "#";
            }
             else
                cout << ".";
        }

    }
    cout << "\n";

}


return 0;
}
