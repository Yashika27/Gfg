#include <bits/stdc++.h> 
using namespace std; 
  
bool isPossible(int l, int m, int x, int y) 
{ 
    if (l * m == x + y) 
        return true; 
  
    return false; 
} 
  
int main() 
{ 
    int l,m,x,y;
    cin>>l>>m>>x>>y;
  
    if (isPossible(l, m, x, y)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 
