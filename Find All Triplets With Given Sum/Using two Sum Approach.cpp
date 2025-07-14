class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr, int k) {
        
        set<vector<int>>resSet;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < arr.size(); i++) {
            int newTarget = k - arr[i];
            
            int low = i+1, high = arr.size()-1;
            
            while(low < high) {
                int twoSum = arr[low] + arr[high];
                if(twoSum == newTarget) {
                    vector<int>currRes;
                    currRes.push_back(arr[i]);
                    currRes.push_back(arr[low]);
                    currRes.push_back(arr[high]);
                    resSet.insert(currRes);
                    low++;
                } else if(twoSum > newTarget) {
                    high--;
                } else {
                    low++;
                }
            }
        }
        
        vector<vector<int>>res;
        for(vector<int> v: resSet) {
            res.push_back(v);
        }
        return res;
    }
};
