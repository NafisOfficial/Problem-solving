#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int node, vector<int> &vis, vector<int> adj[], stack<int> &st)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, st);
        }
    }
    st.push(node);
}

void dfsT(int node, vector<int> &vis, vector<int> adjT[])
{
    vis[node] = 1;
    vector<int> ls;
    ls.push_back(node);
    for (auto it : adjT[node])
    {
        if (!vis[it])
        {
            dfsT(it, vis, adjT);
        }
    }
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

void scc(int N, vector<int> adj[])
{
    vector<int> vis(N, 0);
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, st);
        }
    }

    vector<int> adjT[N];
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
        for (auto it : adj[i])
        {
            // i -> it
            // it -> i
            adjT[it].push_back(i);
        }
    }
    int sc = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!vis[node])
        {
            sc++;
            dfsT(node, vis, adjT);
            cout << endl;
        }
    }
    cout << "Strongly Connected Componenet is : " << sc << endl;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << "Number of Node is : " << n << endl;
    int edge;
    cin >> edge;
    cout << "Number of Edge is : " << edge << endl;

    std::vector<int> adj[n];
    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    scc(n, adj);

    return 0;
}