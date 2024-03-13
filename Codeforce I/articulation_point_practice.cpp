#include<bits/bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<char> adj[N], ans, vertex;
vector<int> dis(N), low(N);
bool vis[N], mark[N];
int timer = 1;
void dfs(int node, int parent)
{
    vis[node] = true;
    dis[node] = low[node] = timer;
    timer++;
    int child = 0;
    for(auto it : adj[node])
    {
        if(it == parent) continue;
        if(!vis[it])
        {
            dfs(it, node);
            low[node] = min(low[node], low[it]);
            if(low[it]>=dis[node] && parent != -1)
            {
                mark[node] = true;
            }
            child++;
        }
        else
        {
            low[node] = min(low[node],dis[it]);
        }
    }
    if(child > 1 && parent == -1)
    {
        mark[node] = true;
    }
}
void articulation()
{
    for(auto it : vertex)
    {
        if(!vis[it])
        {
            dfs(it, -1);
        }
    }
    for(auto it : vertex)
    {
        if(mark[it])
        {
            ans.push_back(it);
        }
    }
    if(ans.size() == 0)
    {
        cout<<"No articulation point"<<endl;
    }
    else
    {
        for(auto it : ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
