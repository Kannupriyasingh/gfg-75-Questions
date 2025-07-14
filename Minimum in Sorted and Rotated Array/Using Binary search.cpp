class Solution {
  public:
    int findMin(vector<int>& arr) {
       int i = 0, j = arr.size() - 1;
       
       while(i < j) {
           int mid = i + (j - i) / 2;
           
           if(arr[mid] > arr[j]) {
               // min must be in right half
               i = mid + 1;
           } else {
               // min could be at mid or in left half
               j = mid;
           }
       }
       
       return arr[i];
    }
};
