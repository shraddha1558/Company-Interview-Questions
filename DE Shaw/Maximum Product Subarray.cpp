// Given an array arr[] that contains n integers (may be positive, negative or zero). 
// Find the product of the maximum product subarray.
#include<bits/stdc++.h>
using namespace std;
//Dynamic Programming
class solution {
    public:
    long long MaxProdSubarray(vector<int> &arr){
    int n = arr.size();
    long long currMax = arr[0];
    long long currMin = arr[0];
    long long maxProd = arr[0];
    for (int i = 1; i < n; i++) {
          
        long long temp = max({ arr[i] * 1LL, arr[i] * currMax, arr[i] * currMin });
          currMin = min({ arr[i] * 1LL, arr[i] * currMax, arr[i] * currMin });
        currMax = temp;
        maxProd = max(maxProd, currMax);
    }
    return maxProd;
    }
};
// TC: O(N) || SC: O(1)
int main(){
    vector<int> v={1,-2,-3,-7,4};
    solution s;
    cout<<s.MaxProdSubarray(v)<<endl;
}
//BruteForce Approach
// class solution {
//     public:
//     long long MaxProdSubarray(vector<int>&arr)
//     {   int n=arr.size();
//         long long result=arr[0];
//         for(int i=0;i<n;i++){
//             long long mul =1;
//             for(int j=i;j<n;j++){
//                 mul*=arr[j];
//                 result=max(result,mul);
//             }
//         }
//         return result;
//     }
// };
// TC: O(N^2) SC: O(1)