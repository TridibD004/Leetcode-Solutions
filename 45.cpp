class Solution {
public:
    int jump(vector<int>& a) {
        int n=a.size();
        int jump=0,l=0,r=0;
        while(r<n-1)
        {
            int dist=0;
           for(int i=l;i<=r;i++)
                dist=max(dist,i+a[i]);
            l=r+1;
            if(dist==r)
                return -1;
            r=dist;
            jump++;
        }
        return jump;
    }
};
