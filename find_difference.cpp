#include<iostream>
#include<string>
using namespace std;

char findTheDifference(string s, string t) {
        char ans=0;
        for(char c:s){
            ans^=c;
        }
        for(char c:t){
            ans^=c;
        }
        return ans;
    }