class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int len=heights.size(),area=0;
        stack<int> st;
        
        for(int i=0;i<len;i++){
            while(!st.empty()&&heights[i]<heights[st.top()]){
                int h=heights[st.top()];
                st.pop();
                int left=st.empty()?-1:st.top();
                area=max(area,h*(i-left-1));
            }
            st.push(i);
        }
        return area;
    }
};