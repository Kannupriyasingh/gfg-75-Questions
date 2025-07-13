class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        long totalProduct = 1;
        int freqOfZero = 0, idxOfZero;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                freqOfZero++;
                idxOfZero = i;
            } else {
                totalProduct = totalProduct*arr[i];
            }
        }
        
        if(freqOfZero == 0) {
            for(int i = 0; i < arr.size(); i++) {
                int newVal = totalProduct/arr[i];
                arr[i] = newVal;
            }
        } else {
            for(int i = 0; i < arr.size(); i++) {
                arr[i] = 0;
            }
            if(freqOfZero == 1) {
                arr[idxOfZero] = totalProduct;
            }
        }
        
        return arr;
        
    }
};
