class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        //vector<vector<int>> ans;
        int n=grid.size(),m=grid[0].size();
         k= k%(m*n);
        if(k==0) return grid;
        vector<int> v;
        int p=m*n-1;
        for(int i=0;i<k;i++)
        {
            v.emplace_back(grid[p/m][p%m]);
            p--;
        }
        p=m*n - k;
        int l=m*n-1;
        for(int i=0;i<p;i++)
        {
           grid[l/m][l%m]=grid[(l-k)/m][(l-k)%m];
            l--;
        }
        int j=k-1;
        for(int i=0;i<k;i++)
        {
            grid[i/m][i%m]=v[j--];
        }
        return grid;
    }
};