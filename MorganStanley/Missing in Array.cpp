// Given an array arr of size n−1 that contains distinct integers in the range of 1 to n (inclusive), 
// find the missing element. The array is a permutation of size n with one element missing. Return the missing element.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNumber(int n, vector<int>& arr) 
    {
        for(int i = 1; i<n; i++)
        {
             int found = 0;
             for(int j = 0; j<n-1; j++)
             {
                 if(arr[j] == i)
                 {
                     found = 1;
                 }
             }
             
             if(found == 0)
             {
                 return i;
             }
        }
        return -1;
    }
};
//TC : O(N)
int main(){
    Solution sol;
    int n=5;
    vector<int> arr={1,2,4,5};
    int missingElement= sol.missingNumber(n,arr);
    cout<<"Missing Element is "<< missingElement<<endl;
}