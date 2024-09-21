// Given an array arr of size n−1 that contains distinct integers in the range of 1 to n (inclusive), 
// find the missing element. The array is a permutation of size n with one element missing. 
// Return the missing element.
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int MissingNumber(int n, vector<int>& array){
        int miss=0;
        for(int i=1;i<=n;i++){
            miss=miss^i;
        }
        for(int i=0;i<n-1;i++){
            miss=miss^array[i];
        }
        return miss;
    }
};
//TC : O(N)
int main(){
    int n=6;
    vector<int> VectorArray;
    VectorArray={1,3,4,5,6};
    solution s;
    cout<<s.MissingNumber(n,VectorArray)<<endl;
}
//Approch 2
// class Solution {
//   public:
//     int missingNumber(int n, vector<int>& arr) {
//         int sum=0;
//      for(int i=1; i<=n;i++){
//          sum=sum+i;
//      }
//      for(int i=0; i<n-1;i++){
//          sum=sum-arr[i];
//      }
//      return sum;
//     }
// };
// TC: O(N)