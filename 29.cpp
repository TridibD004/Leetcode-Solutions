class Solution {
public:
    int divide(int a, int b) {
        if(a==INT_MIN && b==-1)
            return INT_MAX;
        return (a/b);
    }
};
