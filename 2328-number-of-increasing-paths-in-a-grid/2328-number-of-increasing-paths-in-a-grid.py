from functools import cache

class Solution:
    def countPaths(self, grid: List[List[int]]) -> int:
        n_rows = len(grid)
        n_cols = len(grid[0])
        
        @cache
        def dp(i, j):
            nonlocal n_rows, n_cols
            count = 1
            
            for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                ni = i + di
                nj = j + dj
                
                if 0 <= ni < n_rows and 0 <= nj < n_cols and grid[ni][nj] > grid[i][j]:
                    count += dp(ni, nj)
                    
            return count % (10 ** 9 + 7)
        
        return sum(dp(i, j) for i in range(n_rows) for j in range(n_cols)) % (10 ** 9 + 7)