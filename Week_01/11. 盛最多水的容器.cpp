class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int temp = min(height[i], height[j]) * (j - i);         //算当前面积
            water = max(water, temp);                               //保存最大面积
            height[i] < height[j] ? i++ : j--;                      //短的往前走（<,<= 不影响）
        }
        return water;
    }
};