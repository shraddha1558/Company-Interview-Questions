// Given an unsorted array of size n. Array elements are in the range of 1 to n. 
// One number from set {1, 2, …n} is missing and one number occurs twice in the array. 
// Find these two numbers.
#include<bits/stdc++.h>
using namespace std;
class solution{
    private:
    vector<bool> vectvisit(n+1,false);
    int repeating= -1;
    int missing =-1;
    void visited(vector<int>&arr){
        int n=arr.size();
        for(int i=0; i<n;i++){
        if(!vectvisit[arr[i]]){
            vectvisit[arr[i]]= true;
    }
    public:
    }
    int MissingElement(vector<int>& arr){
    int n=arr.size();
    for(int i=1; i<=n;i++){
        if(!vectvisit[i]){
            missing =i;
            break;
        }
    }
    return missing;
}
int RepeatElement(vector<int>& arr){
    int n=arr.size();
    for(int i=1; i<=n;i++){
        if(vectvisit[arr[i]]){
            repeating= arr[i];
        }
        else
        return -1;
    }
    return repeating;
}
};

int main(){
    solution s;
    vector<int> arr={1,3,4,5,5};
    cout<<s.RepeatElement(arr)<<endl;
    cout<<s.MissingElement(arr)<<endl;
    return 0;
}