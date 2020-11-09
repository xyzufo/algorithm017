class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int xsp[9][9] = { 0 };
        int ysp[9][9] = { 0 };
        int lsp[9][9] = { 0 };
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if ((++xsp[board[i][j] - '1'][i] > 1) ||
                        (++ysp[board[i][j] - '1'][j] > 1) ||
                        (++lsp[board[i][j] - '1'][(i / 3) * 3 + j / 3] > 1))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};