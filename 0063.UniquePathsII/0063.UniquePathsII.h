#pragma once

/*
一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为 “Start” ）。
机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish”）。
现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？
网格中的障碍物和空位置分别用 1 和 0 来表示。

示例 1：
    输入：obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
    输出：2
    解释：3x3 网格的正中间有一个障碍物。
        从左上角到右下角一共有 2 条不同的路径：
        1. 向右 -> 向右 -> 向下 -> 向下
        2. 向下 -> 向下 -> 向右 -> 向右

示例 2：
    输入：obstacleGrid = [[0,1],[0,0]]
    输出：1

提示：
    m == obstacleGrid.length
    n == obstacleGrid[i].length
    1 <= m, n <= 100
    obstacleGrid[i][j] 为 0 或 1
*/

#include <vector>

using std::vector;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        if (obstacleGrid[0][0] == 1)
        {
            return 0;
        }

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        int paths[m][n];

        int i = 0;
        int j = 0;

        // 第一列初始化
        for (; i < m; ++i)
        {
            if (obstacleGrid[i][0] == 1)
            {
                paths[i][0] = 0;
                break;
            }
            else
            {
                paths[i][0] = 1;
            }
        }

        for (; i < m; ++i)
        {
            paths[i][0] = 0;
        }

        // 第一行初始化
        for (; j < n; ++j)
        {
            if (obstacleGrid[0][j] == 1)
            {
                paths[0][j] = 0;
                break;
            }
            else
            {
                paths[0][j] = 1;
            }
        }

        for (; j < n; ++j)
        {
            paths[0][j] = 0;
        }

        for (i = 1; i < m; ++i)
        {
            for (j = 1; j < n; ++j)
            {
                if (obstacleGrid[i][j] == 1)
                {
                    paths[i][j] = 0;
                }
                else
                {
                    paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
                }
            }
        }
        return paths[m -1][n - 1];
    }
};
