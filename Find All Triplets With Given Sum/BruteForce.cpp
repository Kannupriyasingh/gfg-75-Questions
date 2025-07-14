class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr, int k) {
       vector<vector<int>>res;
       
      sort(arr.begin(), arr.end());
       for(int i = 0; i < arr.size(); i++) {
           for(int j = i+1; j < arr.size(); j++) {
               for(int m = j+1; m < arr.size(); m++) {
                   if(arr[i] + arr[j] + arr[m] == k) {
                       vector<int>itemOfRes;
                       itemOfRes.push_back(arr[i]);
                       itemOfRes.push_back(arr[j]);
                       itemOfRes.push_back(arr[m]);
                       res.push_back(itemOfRes);
                   }
               }
           }
       }
       return res;
        
    }
};
