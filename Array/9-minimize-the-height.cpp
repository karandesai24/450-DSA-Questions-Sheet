#include <bits/stdc++.h>

using namespace std;
class Solution {
 
 public:
 
 int getMinDiff(int arr[], int n, int k) {
    
if (n == 1) return 0;
   
 sort(arr, arr + n);
   
 int ans = arr[n - 1] - arr[0];

  
  for (int i = 0;i < n;i++) {
     
   if (arr[i] < k) continue;     

    int curr_min = min(arr[0] + k, arr[i] - k);
    
    int curr_max = max(arr[n - 1] - k, arr[i - 1] + k);
       
 if (curr_max < curr_min) continue;   
     
  ans = min(ans, curr_max - curr_min);
    }
    
return ans;
}
};

int main() {
  
  int t;
  
  cin >> t;
  
  while (t--) {

        int n, k;
        cin >> k;
        cin >> n;
    
    int arr[n];
   
     for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
       
 Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
       
 cout << ans << "\n";
    }
  
  return 0;
} 