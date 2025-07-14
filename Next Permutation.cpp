class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        
        int j = n-2;
        
        while(j >= 0 && arr[j] >= arr[j+1]) {
            j--;
        }
        
        // when the array is sorted in dec order than the next permutation is the same array in inc order
        if(j == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }
        // so as we can see that it is sorted in inc order from right side till the swaping element index
        // like 2 4 1 7 5 0
        // here we j = 2 which is the swapping index
        // and we can see its sorted from right side till j = 2
        
        // so to fing the next larger element than element at index 2 we can traverse from right side
        for(int t = n-1; t >= j; t--) {
            if(arr[t] > arr[j]) {
                swap(arr[t], arr[j]);
                break;
            }
        }
        // then we have to sort the array after swapped index j
        sort(arr.begin()+j+1, arr.end());
        
    }
};
