// Given an integer array arr[]. 
// Find the contiguous sub-array(containing at least one number) that has the maximum sum and return its sum.
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int MaxSubArraySum(vector<int> &arr){
        long long maxi=LONG_MIN;
        long long sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
int main(){
    solution s;
    vector<int> VectorArray= {-1,-2,4,3,-2};
    cout<<s.MaxSubArraySum(VectorArray)<<endl;
}
// TC: O(N)
// SC: O(1)