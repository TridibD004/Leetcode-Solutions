class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        for(int i=0;i<=n-m;i++)
        {
            bool a=true;
            for(int j=i;j<i+m;j++)
            {
                cout<<haystack[j]<<" "<<needle[j-i]<<endl;
                if(haystack[j]!=needle[j-i])
                    a=false;
            }
            if(a)
                return i;
        }
        return -1;
    }
};
