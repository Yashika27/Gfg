#include<iostream>
#include<cmath>
#include<set>
 
using namespace std;
 
int main()
{
    int i,n,max1=0,t,len=0;
    set<int> s;
    cin>>n;
    
    for(i=1;i<=(2*n);i++)
    {
        cin>>t;
        if(s.count(t))
        {
        s.erase(t);
        len--;
        }
        else
        {
        s.insert(t);
        len++;
        }
        if(max1<len)
        max1=len;
    
    }
    
    cout<<max1;
}
