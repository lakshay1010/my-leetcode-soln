class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int res=0;
        int n=grid.size();
        for(int row=0; row<n; ++row){
            for(int col=0; col<n; ++col){
                bool are_equal=true;
                for(int i=0; i<n; ++i){
                    if(grid[row][i]!=grid[i][col])
                        are_equal=false;
                }
                if(are_equal) res++;
            }
        }
        return res;
    }
};