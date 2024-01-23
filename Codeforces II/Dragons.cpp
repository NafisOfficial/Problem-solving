#include<bits/stdc++.h>

using namespace std;

int main(){
int s,n,x,y,i,j;
pair<int,int> values[1000];
cin >> s >> n;
for(i=0;i<n;i++){
    cin >> x >> y;
    values[i].first = x;
    values[i].second = y;
}
sort(values,values+n);
for(i=0;i<n;i++){

    if(s>values[i].first){
        s = s+values[i].second;
    }else{
        cout << "NO";
        return 0;
    }
}
cout << "YES";
return 0;
}
