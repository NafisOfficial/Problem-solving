#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, vector<int> wt,vector<int>val, int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(val[n - 1]+ knapSack(W - wt[n - 1], wt, val, n - 1),knapSack(W, wt, val, n - 1));
}

int main()
{
    int W,n;
    cout<<"Enter the size of sack(weight): ";
    cin>>W;
    cout<<"How many elements: ";
    cin>>n;
    vector<int> profit(n), weight(n);
    for(int i = 0; i<n; i++)
    {
        cin>>profit[i]>>weight[i];
    }
    cout << "The maximum profit: "<<knapSack(W, weight, profit, n);
    return 0;
}
