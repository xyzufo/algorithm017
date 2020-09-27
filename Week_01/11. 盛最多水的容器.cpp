class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int area = 0;
        while (left < right) {
            int temp = min(height[left], height[right]) * (right - left);
            area = max(area, temp);
            height[left] < height[right] ? left++ : right--;
        }
        return area;
    }
};