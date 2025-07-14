class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& arr, int k) {
        int i = 0, j = 0, zeros = 0, ans = 0;
        
        while(j < arr.size()) {
            if(arr[j] == 0) {
                zeros++;
            }
            
            while(zeros > k) {
                if(arr[i] == 0) {
                    zeros--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
        
    }
};
