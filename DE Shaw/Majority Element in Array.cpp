// Given an array arr. Find the majority element in the array. If no majority exists, return -1.
// A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.
#include<bits/stdc++.h>
using namespace std;
class solution {
    public: 
    int MajorityElement(vector<int> VectorArray){
        int n=VectorArray.size();
        if(n==1) return VectorArray[0];
        unordered_map<int,int> map;
        for( auto x : VectorArray){
            map[x]++;
        }
        for(auto it: map){
            if(it.second>n/2){
                return it.first;
            }
        }
            return -1;
    }
};
//TC : O(N) 
//SC : O(N)
int main(){
    solution s;
    vector<int> arr={1,2,2,2,3,4};
    cout<<s.MajorityElement(arr)<<endl;
    return 0;
}
//Alternative Solution
// class solution {
//     public:
//     int MajorityElement(vector<int>&arr){
//         int n=arr.size();
//         if(n==1) return arr[0];
//         int cnt=1;
//         sort(arr.begin(),arr.end());
//         for(int i=1;i<n;i++){
//             if(arr[i-1]==arr[i]){
//                 cnt++;
//             }
//             else{
//                 if(cnt>n/2){
//                     return arr[i-1];
//                 }
//                 cnt=1;
//             }
//         }
//         if(cnt>n/2){
//             return arr[n-1];
//         }
//         return -1;
//     }
// };
//TC : O(nlogn)
//SC : O(1)