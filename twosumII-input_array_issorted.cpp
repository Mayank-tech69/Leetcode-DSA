class Solution {
    public:
        vector<int> twoSum(vector<int>& num, int target) {
            vector<int> answer;
            int s=0,e=num.size()-1;
            while(s<e){
                if(num[s]+num[e]==target){
                    answer.push_back(s+1);
                    answer.push_back(e+1);
                    s++;
                    e--;
                }
                else if(num[s]+num[e]<target) s++;
                else e--;
    
            }
            return answer;
        }
    };