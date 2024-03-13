#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<char> graph[N];
bool visited[N];

void dfs(char vertex)
{
    if (visited[vertex])
        return;
    visited[vertex] = true;
    cout << vertex << " ";
    for (auto child : graph[vertex])
    {
        // if (visited[child])
        //     continue;
        dfs(child);
    }
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
    dfs(source);

    return 0;
}