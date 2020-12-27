#include <bits/stdc++.h>
using namespace std;

 
    float func(int n)
    {
    
    double s = floor(sqrt(n));
   
    double t = n/s;
    float p = ceil(t);
      
    return s+p;
        
    }

int main() {
    
    int n;
        cin>>n;
        cout<<func(n);
    

}
