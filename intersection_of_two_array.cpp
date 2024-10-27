class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j =0;
        vector<int>ans;
        int present = -1;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                if(present != nums1[i]){
                    ans.push_back(nums1[i]);
                    present = nums1[i];
                }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;;
            }
            else if(nums1[i] > nums2[j]){
                j++;;
            }
        }
        return ans;
    }
};