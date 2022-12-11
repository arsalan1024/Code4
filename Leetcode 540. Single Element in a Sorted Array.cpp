class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size();
        int n=nums.size();
        if(n == 1)
        return nums[n-1];
        while(low < high) {
            int mid = low + (high - low)/2;
            if(nums[mid] != nums[(mid+1)%n] && nums[mid] != nums[(mid-1+n)%n])
                return nums[mid];
            else if(nums[mid] == nums[(mid+1)%n]){
                if((mid - low)%2 == 0)
                low = mid;
                else
                high = (mid-1+n)%n;
            }
            else{
                if((mid - low)%2 == 0)
                high = mid;
                else
                low = (mid + 1)%n;
            }
        }
        return nums[high];

    }
};