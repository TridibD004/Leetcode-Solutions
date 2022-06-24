class Solution {
    int n;
    
public:
    int longestLength(string &s, int left, int right) {
        while (left >= 0 && right < n) {
            if (s[left] != s[right]) break;
            left--; right++;
        }
        return right - left - 1;
    }
    
    string longestPalindrome(string s) {
        n = s.size();
        
        int start = 0, end = 0;
        for (int i = 0; i < n; i++) {
            int x = longestLength(s, i, i);
            int y = longestLength(s, i, i+1);
            int len = max(x, y);
            
            if (len > end - start + 1) {
                start = i - ((len-1) / 2);
                end = i + (len / 2);
            }
        }
        
        return s.substr(start, end - start + 1);
    }
};
