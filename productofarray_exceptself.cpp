class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& arr) {
            int n = arr.size();
            vector<int> prefix(n,1);
            for(int i = 1;i<n;i++){
                prefix[i]=prefix[i-1]*arr[i-1];
            }
            int suffix=1;
            for(int i = n-1;i>=0;i--){
                prefix[i]=suffix*prefix[i];
                suffix=suffix*arr[i];
            }
            return prefix;
    
    
    
    
        }
    };