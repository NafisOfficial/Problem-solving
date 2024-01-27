#include<bits/stdc++.h>

using namespace std;
// use double data type.
int main(){
int n,l,x,i;
int d;
cin >> n >> l;
int a[n];
for(i=0;i<n;i++){
    cin >> x;
    a[i] = x;
}
sort(a,a+n);
d = max(a[0],l-a[n-1])*2;
for(i=1;i<n;i++){
    d = max(d,a[i]-a[i-1]);
}
cout.precision(20);
cout << fixed << d/2.0;
return 0;
}
