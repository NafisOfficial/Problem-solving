#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<char> graph[N];
bool visited[N];

void bfs(char source)
{
    // vector<int> list;
    queue<char> q;
    visited[source] = true;
    q.push(source);
    while (!q.empty())
    {
        char child = q.front();
        q.pop();
        // list.push_back(child);
        cout << child << " ";
        for (auto it : graph[child])
        {
            if (!visited[it])
            {
                visited[it] = true;
                q.push(it);
            }
        }
    }
    // for(auto it : list){
    //     cout<<it<<" ";
    // }
}

int main()
{
    int n;
    cout << "Enter the number of edges: ";
    cin >> n;
    cout << "Enter adjacents: " << endl;
    while (n--)
    {
        char a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    char source;
    cout << "Enter source node: ";
    cin >> source;
    bfs(source);

    return 0;
}