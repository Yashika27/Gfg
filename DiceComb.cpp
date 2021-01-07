#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;



int func(int n)
{
    vector<int>dp(n+1,0);
    dp[0]=1;
    
    if(n==0)
    return dp[n];
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j<0)
            break;
            dp[i] = (dp[i] + dp[i-j]) %mod;
        }
    }
    
    return dp[n];
    
}
int main() {
    
    int n,i,j;
    cin>>n;
    
    cout<<func(n);
}
