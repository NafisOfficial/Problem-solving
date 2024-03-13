#include<bits/stdc++.h>

using namespace std;

int main(){
int n,m,source;
cout << "Enter Node & edges:: ";
cin >> n >> m;
vector<pair<int,int> > g[n+1];
int a,b,wt;
cout << "Enter source & des & wt::\n";
for(int i=0;i<m;i++){
    cin >> a >> b >> wt;
    g[a].push_back(make_pair(b,wt));
    g[b].push_back(make_pair(a,wt));
}
cout << "Enter source:: ",
cin >> source;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
vector<int> distTo(n+1,INT_MAX);
distTo[source] = 0;
pq.push(make_pair(0,source));
while(!pq.empty()){
    int dist = pq.top().first;
    int prev = pq.top().second;
    pq.pop();
    vector<pair<int,int>>::iterator it;
    for(int=g[prev].begin();it!=g[prev].end();it++){
        int next=it->first;
        int nextDist = it->second;
        if(distTo[next]>distTo[prev]+nextDist){
            distTo[next] = distTo[prev]+nextDist;
            pq.push(make_pair(distTo[next],next));
        }}}
    cout << "the distances from source, "<< source << ", are :\n";
    for(int i=1;i<=n;i++)cout<< distTo[i] << " ";
    cout << "\n";
    return 0;
}
