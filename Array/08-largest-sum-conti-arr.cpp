#include<bits/stdc++.h>

using namespace std;




class Solution{
    
public:
   
 int maxSubarraySum(int arr[], int n){
    
    int dp[n];
   
 dp[0] = max(INT_MIN, arr[0]);
    
int omax = dp[0];

   
 for (int i = 1;i < n;i++) {

    
    dp[i] = max(arr[i] + dp[i - 1], arr[i]);

   
     omax = max(dp[i], omax);
   
 }
    
return omax;

    
}
};


int main()
{

    int t,n;
    

    cin>>t; 
  
  while(t--) 
    {
        

        cin>>n; 
        
   
     int a[n];
        
   
     for(int i=0;i<n;i++)
        
    cin>>a[i]; 
            
     
   Solution ob;
        
    
    cout << ob.maxSubarraySum(a, n) << endl;
   
 }
}
  
