// Given an array arr of size n which contains elements in range from 0 to n-1, 
// you need to find all the elements occurring more than once in the given array. 
// Return the answer in ascending order. If no such element is found, return list containing [-1]. 
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int> FindDuplicates(vector<int> VectorArray){
        unordered_map<int,int> Freq;
        vector<int> duplicates;
        for(int temp: VectorArray){
            Freq[temp]++;
        }
        for(auto it : Freq){
            if(it.second>1){
                duplicates.push_back(it.first);
            }
        }
        if (duplicates.empty())
        return {-1};
        sort(duplicates.begin(),duplicates.end());
        return duplicates;
    }
};
//TC: O(NlogN) || SC: O(N)
int main(){
    solution s;
    vector <int> v={0,3,1,2,3,3,3,4,2};
    vector <int> ans=s.FindDuplicates(v);
    for(int i: ans){
    cout<<i<<" ";
    }
    cout<<endl;
}