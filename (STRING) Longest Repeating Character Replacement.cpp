class Solution {
  public:
    int characterReplacement(string& s, int k) {
        int count[26] = {0};
        int i = 0, j = 0;
        int maxFreq = -1, LRC = 0; // longest Repeating Character
        
        while(j < s.size()) {
            count[s[j] - 'A']++;
            maxFreq = max(maxFreq, count[s[j]-'A']);
            
            while((j-i+1 - maxFreq) > k) {
                count[s[i] - 'A']--;
                i++;
            }
            LRC = max(LRC, (j-i+1));
            j++;
        }
        return LRC;
    }
};
