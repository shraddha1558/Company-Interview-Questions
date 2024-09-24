// Given a sorted array arr[] of size N. 
// Find the element that appears only once in the array. 
// All other elements appear exactly twice. 
#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int SingleElement(vector<int>array){
        int n=array.size();
        int l=0,h=n-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(mid%2==1){
                mid--;
            }
            if(array[mid]==array[mid+1]){
                l=mid+2;
            }
            else{
            h=mid;
            }
        }
        return array[l];
    }
};
//TC: O(logN) SC: O(1)
int  main(){
    vector<int> v={1,1,3,3,6,7,7,8,8};
    solution s;
    cout<<s.SingleElement(v)<<endl;
}
//Approach 2
// class solution {
//     public:
//     int SingleElement(vector<int>array){
//         int x=0;
//         int n=array.size();
//         for(int i=0;i<n;i++){
//           x=x^array[i];
//         }
//         return x;
//     }
// };
//TC: O(N) SC: O(1)
