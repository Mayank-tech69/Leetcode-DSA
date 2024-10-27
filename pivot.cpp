class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            sum+=nums[i];
        }
        int ans=-1;
        int rsum=sum , lsum=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            rsum-=nums[i];
            if(rsum==lsum)
            {
                ans=i;
                break;
            }
            lsum+=nums[i];
        }
        return ans;
    }
};
