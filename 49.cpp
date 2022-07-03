class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> ans;
    vector<string> res;
    int n=s.size();

    int a[n][26];
    memset(a,0,n*26*sizeof(int));
    
    bool b[n];
    memset(b,false,n*sizeof(bool));
    
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<s[i].size();j++) 
        {
            a[i][s[i][j]-'a']++;
        }
    }
    for(int i=0;i<n;i++) 
    {
        if(b[i]==false)
        {
            b[i]=true;
            res.push_back(s[i]);
        }
        for(int j=i+1;j<n;j++) 
        {
            bool c =false;
            if(b[j]==false) 
            {
                for(int k=0;k<26;k++) 
                {
                    if(a[i][k]==a[j][k])
                        c=true;
                    else
                    {
                        c=false;
                        break;
                    }
                }
            }
            if(c)
            {
                res.push_back(s[j]);
                b[j]=true;
            }
        }
        if(!res.empty())
            ans.push_back(res);
        res.clear();
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return ans;
    }
};
