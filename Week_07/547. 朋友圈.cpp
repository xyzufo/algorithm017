class Solution {
public:
    vector<int> pre;
    int find(int x)
    {
        if (pre[x] != x)pre[x] = find(pre[x]);
        return pre[x];
    }
    int findCircleNum(vector<vector<int>>& M) {
        int N = M.size();
        for (int i = 0; i < N; ++i)
        {
            pre.push_back(i);  
        }
        int res = N;  
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (M[i][j] == 0)continue;  
                int fx = find(i), fy = find(j);
                if (fx != fy)
                {
                    pre[fx] = fy;
                    res--;
                }
            }
        }
        return res;
    }
};