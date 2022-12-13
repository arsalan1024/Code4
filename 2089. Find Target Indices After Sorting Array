class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>v;
        int k1=-1,k2=-1;
        int n = nums.size();
        int l = 0, h = n-1;
        while(l <= h) 
        {
            int mid = l + (h - l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else{
                if(nums[mid]==target)
                    k1=mid;
                h=mid-1;
            }
        }
        l = 0, h = n-1;
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(nums[mid]>target)
                h=mid-1;
            else{
                if(nums[mid]==target)
                    k2=mid;
                l=mid+1;
            }
        }
        if(k1==-1 && k2==-1)
        return v;
        if(k1 >= k2){
            for(int i=k2; i<=k1; i++)
            v.push_back(i);
        }
        else for(int i=k1; i<=k2; i++)
        v.push_back(i);
        return v;
    }
};
