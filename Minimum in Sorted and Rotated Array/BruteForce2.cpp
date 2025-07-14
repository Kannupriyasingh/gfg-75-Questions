class Solution {
  public:
    int findMin(vector<int>& arr) {
        int maxItemIdx = -1, maxVal = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > maxVal) {
                maxVal = arr[i];
                maxItemIdx = i;
            }
        }
        return (maxItemIdx == arr.size()-1) ? arr[0] : arr[maxItemIdx+1];
    }
};
