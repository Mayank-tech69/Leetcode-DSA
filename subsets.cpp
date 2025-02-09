class Solution {
    public:
    
        //helper function
        void allsubsets(vector<int>& nums, vector<int>& ans,int i,vector<vector<int>> &allsubs){
            if(i==nums.size()){
                allsubs.push_back({ans});
                return;
            }
            //inclusion
            ans.push_back(nums[i]);
            allsubsets(nums,ans,i+1,allsubs);
    
            //exclusion
            ans.pop_back();
            allsubsets(nums,ans,i+1,allsubs);
        }
    
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> allsubs;
            vector<int> ans;
            allsubsets(nums,ans,0,allsubs);
            return allsubs;
        }
    
    };