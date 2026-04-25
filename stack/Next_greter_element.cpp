#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        vector<int> nge(n);
        stack<int> st;
        unordered_map<int, int> indexMap;

        // store index of each element
        for(int i = 0; i < n; i++) {
            indexMap[nums2[i]] = i;
        }

        // build NGE array
        for(int i = n - 1; i >= 0; i--) {
            
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            nge[i] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }

        // answer
        vector<int> ans;
        for(int x : nums1) {
            ans.push_back(nge[indexMap[x]]);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n, m;
    
    cout << "Enter size of nums1: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of nums1: ";
    for(int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of nums2: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements of nums2: ";
    for(int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    vector<int> result = obj.nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}