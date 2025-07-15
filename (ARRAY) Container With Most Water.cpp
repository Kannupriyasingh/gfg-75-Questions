class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int mostWater = 0;
        
        int i = 0, j = arr.size()-1;
        
        while(i < j) {
            int currWater = min(arr[i], arr[j]) * (j-i);
            mostWater = max(mostWater, currWater);
            
            if(arr[i] > arr[j]) {
                j--;
            } else {
                i++;
            }
        }
        return mostWater;
    }
};
