//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        
        int MAX = 0;
        
        int  i =0, j= n-1;
        
        while(i<n){
            
            if(a[i] <= a[j]){
                
                MAX = max(MAX, j-i );
                
                j = n-1;
                
                i++;
            }
            else{
                
                j--;
            }
        }
        
        return MAX;
    }
};

