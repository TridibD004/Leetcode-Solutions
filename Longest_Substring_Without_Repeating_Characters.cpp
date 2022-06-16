class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<char> v;
        int ans=0;
        for(int i=0;i<s.length();i++){
            auto it = find(v.begin(),v.end(),s[i]);
            if(it!=v.end()){
                int size= v.size();
                ans= max(ans,size);
                v.erase(v.begin(),it+1);
               }
          v.push_back(s[i]);
        }
         int size= v.size();
          ans= max(ans,size);
        return ans;
    }
};
