class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ans;
        int n=grid.size(),m=grid[0].size();
         k= k%(m*n);
        if(k==0) return grid;
        int p=m*n-k;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int j=0;j<m;j++)
            {
                v.emplace_back(grid[p/m][p%m]);
                p++;
                if(p==m*n) p=0;
            }
            ans.emplace_back(v);
        }
        return ans;
    }
};