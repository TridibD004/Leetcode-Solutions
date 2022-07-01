class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>a,vector<int>b){
            return a[1]>b[1];
        });
        int c=0;
        int i=0;
        while(truckSize>0 && i<n)
        {
            if(truckSize>=boxTypes[i][0])
            {
                c+=boxTypes[i][1]*boxTypes[i][0];
                truckSize-=boxTypes[i][0];
            }
            else
            {
                c+=truckSize*boxTypes[i][1];
                truckSize=0;
            }
            i++;
        }
        return c;
    }
};
