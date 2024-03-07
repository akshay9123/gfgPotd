//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    
	    map<char,int>mp;
	    
	    map<char,int>mp1;
	    for(int i = 0; i<s.size(); i++){
	        mp[s[i]]++;
	    }
	    
	    int mini = INT_MAX;
	    for(auto pai:mp){
	        mini = min(pai.second,mini);
	    }
	    
	    bool already = false;
	    
	    for(auto pai:mp){
	        if(pai.second>mini){
	            
	            if(already == false){
	                
	                already = true;
	                
	                if(pai.second -1 != mini){
	                    return false;
	                }
	            }
	            else{
	                return false;
	            }
	            
	        }
	    }
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
