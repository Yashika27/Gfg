#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,coins;
	cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++)
		cin>>v[i];
        vector<int> dp(x+1,1e9);
        dp[0]=0;
        for(int i=1;i<x+1;i++)
		{
            for(int j=0;j<n;j++)
			{
                if(i-v[j]>=0)
				dp[i]=min(dp[i],1+dp[i-v[j]]);
            }
        }
        
        cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;
}
