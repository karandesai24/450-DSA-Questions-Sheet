#include <bits/stdc++.h>


using namespace std;


int main()
{

    int t;
 
   cout<<"Enter num of arrays:";
    
cin>>t;
    
while(t--)
    
{
        int n;
  
      cout<<"Enter size of an array:";
  
      cin>>n;
        
   
     int a[n],i;
        
cout<<"Enter array with space:";
     
   for(i=0;i<n;++i)
    
      cin>>a[i];
    

  
  int last=a[n-1];
    
    for(i=n-2;i>=0;--i)
  
      {
        
     a[i+1]=a[i];
       
 }
    
    a[0]=last;
   


     cout<<"Rotated array:";
   
     for(i=0;i<n;++i)
       
 cout<<a[i]<<" ";
       
 cout<<endl;
        
       
 
        break;
   
 }
  
  

    return 0;

}
