// Given an array arr of size n which contains elements in range from 0 to n-1, 
// you need to find all the elements occurring more than once in the given array. 
// Return the answer in ascending order. If no such element is found, return list containing [-1]. 
#include<bits/stdc++.h>
using namespace std;
class solution {
public:
    vector<int> FindDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            while (nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != i + 1 && (ans.empty() || ans.back() != nums[i])) {
                ans.push_back(nums[i]);
            }
        }
        if (ans.empty()) {
            return {-1};
        }
        return ans;
    }
};
//TC: O(N) SC: O(1)
int main(){
    solution s;
    vector <int> v={1,4,4,3,2,2,5,5,5,8,8};
    vector <int> ans=s.FindDuplicates(v);
    for(int i: ans){
    cout<<i<<" ";
    }
    cout<<endl;
}

//Approach 2
// class solution {
//     public:
//     vector<int> FindDuplicates(vector<int> VectorArray){
//         unordered_map<int,int> Freq;
//         vector<int> duplicates;
//         for(int temp: VectorArray){
//             Freq[temp]++;
//         }
//         for(auto it : Freq){
//             if(it.second>1){
//                 duplicates.push_back(it.first);
//             }
//         }
//         if (duplicates.empty())
//         return {-1};
//         sort(duplicates.begin(),duplicates.end());
//         return duplicates;
//     }
// };
//TC: O(nlogn)
//SC: O(n)