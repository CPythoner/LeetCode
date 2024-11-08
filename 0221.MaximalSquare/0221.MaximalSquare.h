#pragma once

#include <vector>
using namespace std;

/*
221. 最大正方形

在一个由 '0' 和 '1' 组成的二维矩阵内，找到只包含 '1' 的最大正方形，并返回其面积。

示例 1：
    输入：matrix = [["1","0","1","0","0"],
                   ["1","0","1","1","1"],
                   ["1","1","1","1","1"],
                   ["1","0","0","1","0"]]
    输出：4
    解释：最大正方形如下图所示，面积为 4
    [["1","0","1","0","0"],
     ["1","0","1","1","1"],
     ["1","1","1","1","1"],
     ["1","0","0","1","0"]]

示例 2：
    输入：matrix = [["0","1"],
                   ["1","0"]]
    输出：1

示例 3：
    输入：matrix = [["0"]]
    输出：0

提示：
    - m == matrix.length
    - n == matrix[i].length
    - 1 <= m, n <= 300
    - matrix[i][j] 为 '0' 或 '1'

解题思路：
    1. 使用动态规划解决
    2. dp[i][j] 表示以 matrix[i][j] 为右下角的最大正方形边长
    3. 状态转移方程：
       - 如果 matrix[i][j] = '1'：
         dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
       - 如果 matrix[i][j] = '0'：
         dp[i][j] = 0
    4. 记录最大边长，返回其平方即为面积

时间复杂度：O(mn)
    - 需要遍历整个矩阵一次

空间复杂度：O(mn)
    - 需要一个同样大小的dp数组
*/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty())
            return 0;

        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int maxSide = 0;

        // 初始化第一行和第一列
        for (int i = 0; i < m; i++)
        {
            if (matrix[i][0] == '1')
            {
                dp[i][0] = 1;
                maxSide = 1;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (matrix[0][j] == '1')
            {
                dp[0][j] = 1;
                maxSide = 1;
            }
        }

        // 动态规划
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] == '1')
                {
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                    maxSide = max(maxSide, dp[i][j]);
                }
            }
        }

        return maxSide * maxSide;
    }
};
