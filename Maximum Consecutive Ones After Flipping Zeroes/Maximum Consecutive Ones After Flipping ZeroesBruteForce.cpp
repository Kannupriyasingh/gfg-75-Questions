// Test Cases Passed: 
// 1110 /1111
// Time limit exceeded.



class Solution {
public:
    int maxOnes(vector<int>& arr, int k) {
        int maxCon = 0;
        for(int i = 0; i < arr.size(); i++) {
            int currMax = 0;
            int currK = k;
            for(int j = i; j < arr.size(); j++) {
                if(arr[j] == 1) {
                    currMax++;
                } else if(arr[j] == 0 && currK > 0) {
                    currMax++;
                    currK--;
                } else {
                    // can't flip anymore, stop
                    break;
                }
                maxCon = max(maxCon, currMax);
            }
        }
        return maxCon;
    }
};
