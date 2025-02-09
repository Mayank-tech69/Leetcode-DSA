class Solution {
    public:
        int binary(vector<int>& nums, int target,int start, int end){
            int mid=start+(end-start)/2;
            if(start<=end){
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<=target){
                    return binary(nums,target,mid+1,end);
                }
                else{
                    return binary(nums,target,start,mid-1);
                }
            }
            
            return -1;
        }
    
        int search(vector<int>& nums, int target) {
            // using recursion
            //int start=0, end = nums.size()-1;
            return binary(nums,target,0,nums.size()-1);
    
            
            
        }
    };