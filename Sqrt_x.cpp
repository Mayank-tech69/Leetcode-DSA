#include<iostream>
using namespace std;

long long binary(int x){
    int s = 0, e = x;
    long long mid = s+(e-s)/2;
    int ans = 0;
    while(s<=e){
        long long square = mid*mid;
        if(square == x){
            return mid;
        }
        if(square<x){
            ans=mid;
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int mySqrt(int x) {
    return binary(x);
}

int main(){
    int num = 8;
    cout<<"square root rounded off to nearest integer of num is "<< mySqrt(num);
}

