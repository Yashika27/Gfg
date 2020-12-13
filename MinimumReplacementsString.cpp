#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,j,even=0,odd=0;
    cin>>s;
    int n=s.length();
    
    for(i=0;i<n;i++)
    {
        if(i%2==0 && s[i]=='1')
        even++;
        else if(s[i]=='1')
        odd++;
    }
    
    if(even>=odd)
    cout<<(odd+ceil(n/2)-even);
    else
    cout<<(even+floor(n/2)-odd);
    
    
}
