// Given an unsorted array of size n. Array elements are in the range of 1 to n. 
// One number from set {1, 2, …n} is missing and one number occurs twice in the array. 
// Find these two numbers.
#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
        vector<bool> vectvisit;
        int repeating = -1;
        int missing = -1;
    
    public:
        Solution(int n) : vectvisit(n + 1, false) {}
        void visited(vector<int>& arr) {
            int n = arr.size();
            for (int i = 0; i < n; i++) {
                if (vectvisit[arr[i]]) {
                    repeating = arr[i];
                } else {
                    vectvisit[arr[i]] = true;
                }
            }
        }
        int MissingElement() {
            for (int i = 1; i < vectvisit.size(); i++) {
                if (!vectvisit[i]) {
                    missing = i;
                    break;
                }
            }
            return missing;
        }
        int RepeatElement() {
            return repeating;
        }
};

int main() {
    vector<int> arr = {1, 3, 4, 5, 5}; 
    int n = arr.size();
    Solution s(n);
    s.visited(arr);
    cout << "Repeated Element: " << s.RepeatElement() << endl;
    cout << "Missing Element: " << s.MissingElement() << endl;
    
    return 0;
}