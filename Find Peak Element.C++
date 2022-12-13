class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        int n=nums.size();
        if(n<2)
        return 0;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(nums[mid]>nums[(mid+1)%n] && nums[mid]>=nums[(mid-1+n)%n])
                return mid;
            if(nums[mid]>=nums[l] && nums[mid]<nums[(mid+1)%n])
                l=(mid+1)%n;
            else
                h=mid;
        }
        return l;
    }
};
