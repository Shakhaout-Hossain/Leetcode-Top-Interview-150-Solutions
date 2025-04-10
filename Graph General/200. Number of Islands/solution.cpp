class Solution {
    public:
        void dfs(vector<vector<char>>& grid, int sr, int sc, int row, int col) {
            if(sr<0||sr>=row||sc<0||sc>=col||grid[sr][sc]!='1')
                return;
            grid[sr][sc]='p';
            dfs(grid, sr+1,sc,row,  col);
            dfs(grid, sr-1,sc,row, col);
            dfs(grid, sr, sc+1,row,col);
            dfs(grid, sr, sc-1,row, col);
        }
        int numIslands(vector<vector<char>>& grid) {
            int row, col,i,j,ans=0;
            row = grid.size();
            col = grid[0].size();
            for(i=0; i<row; i++){
                for(j=0; j<col; j++){
                    if(grid[i][j]=='1'){
                        dfs(grid,i,j,row,col);
                        ans++;
                    }
                }
            }
        return ans;
        }
    };