#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;



int func(int n, vector<int>c)
{
    vector<int>dp(n+1,0);
    dp[0]=1;
    
    if(n==0)
    return dp[n];
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<c.size();j++)
        {
            if(i-c[j]<0)
            break;
            dp[i] = (dp[i] + dp[i-c[j]]) %mod;
        }
    }
    
    return dp[n];
    
}
int main() {
    
    int n,x,i,t;
    vector<int>c;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>t;
        c.push_back(t);
    }
    
    sort(c.begin(),c.end());
    cout<<func(x,c);
}
