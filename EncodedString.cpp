#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,i,j,sum=0,n,k,d;
    
    cin>>t;
    string s;
    for(i=1;i<=t;i++)
    {
       cin>>n;
       cin>>s;
       string str;
       int k;
       for(j=0;j<n;j+=4)
       {
           sum=0;
           for(k=0;k<4;k++)
           {
           sum+= ((int)(s[k+j]- '0') * (pow(2, 3-k)));
       }
      
       str+= ((char)sum + 'a' ) ;
       
       }
       cout<<str<<endl;
       
    }
    
}
