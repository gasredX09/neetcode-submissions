class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        for(int i = 0; i < n; i++)
        {
            unordered_set<char> s;
            for(int j = 0; j < n; j++)
            {
                if(board[i][j] != '.')
                {
                    if(s.count(board[i][j]))
                    {
                        return false;
                    }
                    s.insert(board[i][j]);
                }
            }
        }

        for(int j = 0; j < n; j++)
        {
            unordered_set<char> s;
            for(int i = 0; i < n; i++)
            {
                if(board[i][j] != '.')
                {
                    if(s.count(board[i][j]))
                    {
                        return false;
                    }
                    s.insert(board[i][j]);
                }
            }
        }

        for(int row = 0; row < n; row += 3)
        {
            for(int col = 0; col < n; col += 3)
            {
                unordered_set<char> s;
                for(int i = row; i < row + 3; i++)
                {
                    for(int j = col; j < col + 3; j++)
                    {
                        if(board[i][j] != '.')
                        {
                            if(s.count(board[i][j]))
                            {
                                return false;
                            }
                            s.insert(board[i][j]);
                        }
                    }
                }

            }
        }
        return true;
    }
};
