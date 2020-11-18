class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        int freq[1001] = { 0 };
        for (auto num : arr1) freq[num]++;
        for (int i = 0; i < arr2.size(); i++) {
            while (freq[arr2[i]]) {
                result.push_back(arr2[i]);
                freq[arr2[i]]--;
            }
        }
        for (int i = 0; i < 1001; i++) {
            while (freq[i]) {
                result.push_back(i);
                freq[i]--;
            }
        }
        return result;
    }
};
