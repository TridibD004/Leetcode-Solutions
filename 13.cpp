class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val;
        val['I'] = 1;
        val['V'] = 5;
        val['X'] = 10;
        val['L'] = 50;
        val['C'] = 100;
        val['D'] = 500;
        val['M'] = 1000;
        int ans=0; 
        for(int i = s.length()-1; i>0;i--){
            if(val[s[i]]<= val[s[i-1]]){
                ans+= val[s[i]];
            }
            else{
                ans+= val[s[i]]-val[s[i-1]];
                i--;
            }
        }
        if(val[s[0]]>= val[s[1]] ){
            ans+=val[s[0]];
        }
        return ans;
    }
};
