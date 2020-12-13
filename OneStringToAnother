int minOps(string a, string b) 
{ 
    int m = a.length(), n = b.length(); 
    
    if (n != m) 
       return -1; 
    int freq[256]; 
    memset(freq, 0, sizeof(freq)); 
    for (int i=0; i<n; i++)   
       freq[B[i]]++; 
    for (int i=0; i<n; i++)    
       freq[A[i]]--;         
    for (int i=0; i<256; i++)    
      if (freq[i]) 
         return -1; 
  
     
    int res = 0;
    int i=n-1;
    int j=n-1;
    while(i>=0) 
    { 
        while (i>=0 && a[i] != b[j]) 
        { 
            i--; 
            res++; 
        } 
 
        if (i >= 0) 
        { 
            i--; 
            j--; 
        } 
    } 
    return res; 
}
