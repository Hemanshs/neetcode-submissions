class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxl=0,maxr=0;
        int sum=0;
        while(l<r)
        {
           if(height[l]<height[r])
           {
            if(height[l]>maxl)
            {
                maxl=height[l];
            }
            else 
            {
                sum+=maxl-height[l];
            }
            l++;
           } 
           else
           {
            if(height[r]>maxr)
            {
                maxr=height[r];
            }
            else 
            {
                sum+=maxr-height[r];
            }
           r--;
           }
        }
        return sum;
    }
};
