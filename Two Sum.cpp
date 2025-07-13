// User function Template for C++
#include<bits/stdc++.h>
/////////// 2nd approach 
class Solution {
    public:
        vector<int> twoSum(vector<int> &arr, int target) {
            unordered_map<int, int>isPresent;
            
            for(int i = 0; i < arr.size(); i++){
                isPresent[arr[i]] = i;
            }
            
            for(int i = 0; i < arr.size(); i++) {
                int newTarget = target - arr[i];
                // newTarget should present and its index should not be
                // same as the current index 
                if(isPresent.find(newTarget) != isPresent.end()
                    && isPresent[newTarget] != i) {
                    return {arr[i], arr[isPresent[newTarget]]};
                }
            }
            return {};
        }
};



//////// Approrch 1 - Brute force 

// class Solution {
//   public:
//     vector<int> twoSum(vector<int> &arr, int target) {
//       for(int i = 0; i < arr.size(); i++) {
//           for(int j = 0; j < arr.size(); j++) {
//               if(arr[i] + arr[j] == target) {
//                   return {arr[i], arr[j]};
//               }
//           }
//       }
//       return {};
        
//     }
// };
