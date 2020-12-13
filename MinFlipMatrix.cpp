#include <bits/stdc++.h> 
using namespace std; 

int minimumflip(int mat[][N], int n) 
{  
    int res = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < i; j++) 
            if (mat[i][j] != mat[j][i]) 
                res++; 
    return res; 
} 
  
int main() 
{ 
    int n;
    cin>>
    int m[1000][1000];
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
       cin>>m[i][j];
    }
    }
    cout << minimumflip(m, n) << endl; 
    return 0; 
} 
