#include<bits/stdc++.h>
using namespace std;

/**
                             *********** GCD **************
ll gcd(ll a,ll b)
{
    if(b!=0)
    {
        return gcd(b,a%b);
    }
    else
        return a;
}                                          */

int dir[20][20]={{-1}};
int dp[20][20]={{-1}};

int cap,weight[50],cost[50],n;

void path(int i,int w)
{
    if(dir[i][w]==-1)
        return ;

    if(dir[i][w]==1)
    {
        cout<<i<<" ";
        path(i+1,w+weight[i]);
    }
    else if(dir[i][w]==2)
    {
        path(i+1,w);
    }
}

int knapsack(int i,int w)
{
    int p1=0,p2=0;
    if(i==n+1)
        return 0;

    if(w+weight[i]<=cap)
    {
        p1=cost[i]+knapsack(i+1,w+weight[i]);
    }
    else
        p1=0;

    p2=knapsack(i+1,w);

    if(p1>p2)
    {
        dir[i][w]=1;
        return dp[i][w]=p1;
    }
    else
    {
        dir[i][w]=2;
        return dp[i][w]=p2;
    }

}

int main()
{

    cin>>n>>cap;

    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }

    cout<<knapsack(0,0)<<endl;

    path(0,0);

    return 0;
}

/**
4 1 4 3 4
10 120 280 150 200
*/
