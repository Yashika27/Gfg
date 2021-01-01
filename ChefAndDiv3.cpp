#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,i,j,sum=0,n,k,d;
    
    cin>>t;
    
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>n>>k>>d;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
        
        cout<<min((sum/k),d)<<endl;
    }
    
}
