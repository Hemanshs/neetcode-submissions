class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();       // number of rows
        int n = matrix[0].size();
        int l=0,r=m*n-1;
        while(l<=r)
        {
           int mid = l + (r - l) / 2;          // mid stays as INDEX
            int mid_val = matrix[mid/n][mid%n];
            if(mid_val==target)
            {
                return true;
            }
            else if(mid_val<target)
            {
                l=mid+1;

            }
            else{
                r=mid-1;
            }
        }
        return false;
    
    }
};
