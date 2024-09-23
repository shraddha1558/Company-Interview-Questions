// Given a string S, check if it is palindrome or not.
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    bool ispalindrome(string s){
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]){
                return false;
            }
        }
        return true;
    }
};
//TC: O(N/2) SC: O(1)
int main(){
    solution s;
    string str="Shraddha";
    cout<<s.ispalindrome(str)<<endl;
}