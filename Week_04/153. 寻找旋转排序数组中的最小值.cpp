class Solution {
public:
    int findMin(vector<int>& nums) {
        int nMin = INT_MAX;
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[left] <= nums[mid]) {
                nMin = min(nMin, nums[left]);
                left = mid + 1;
            }
            else {
                nMin = min(nMin, nums[mid]);
                right = mid - 1;
            }
        }
        return nMin;
    }
};