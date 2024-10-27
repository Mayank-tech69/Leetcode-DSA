#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int maximumProduct(vector<int>& nums) {
    int s=nums.size();
    sort(nums.begin(),nums.end());
    int neg = nums[0] * nums[1]*nums[s-1];
    int pos = nums[s-1] * nums[s-2]*nums[s-3];
    return max(neg,pos);
}
