class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0;
        long long  e = num;
        while(s<=e){
            long long  mid = s+(e-s)/2;
            long long  square = mid*mid;
            if(num == square) return true;
            if(square<num){
                s = mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};