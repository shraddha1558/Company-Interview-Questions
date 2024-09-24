// Given arrival and departure times of all trains that reach a railway station. 
// Find the minimum number of platforms required for the railway station so that no train is kept waiting.
// Consider that all the trains arrive on the same day and leave on the same day. 
// Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. 
// At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. 
// In such cases, we need different platforms.

// Note: Time intervals are in the 24-hour format(HHMM) , where the first two characters represent hour (between 00 to 23 ) and 
//the last two characters represent minutes (this will be <= 59 and >= 0).

#include<bits/stdc++.h>
using namespace std;
class solution {
    public: 
    int PlatformCount(vector<int>& arr, vector<int>&dep){
        int n=arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int ans=1;
        int count=1;
        int i=1, j=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                count++;
                i++;
            }
            else{
                count--;
                j++;
            }
            ans=max(ans,count);
        }
        return ans;
        }
};
// TC: O(NlogN) || SC: O(1)
int main(){
    solution s;
    vector <int> dep={1200,1240,1130};
    vector <int> arr={1000,935,1100};  
    //since Numbers starting with 0 are interpreted as octal (base 8) by C++.
    //Fix: Simply remove the leading zero from the number 0935, making it 935 to be treated as a normal decimal number.
    cout<<s.PlatformCount(arr,dep)<<endl;
}