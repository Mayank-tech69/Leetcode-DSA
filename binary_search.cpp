#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid]==target){
                ans = mid;
                e = mid-1;
            }
            else if (nums[mid]<target){
                s = mid+1;

            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

int main(){
    vector<int> test = {1,2,3,4,5};
    int aim = 5;
    cout<<"target index is " << search(test,5);
}