#pragma once

/*
给你一个 n x n 的 方形 整数数组 matrix ，请你找出并返回通过 matrix 的下降路径 的 最小和 。

下降路径 可以从第一行中的任何元素开始，并从每一行中选择一个元素。在下一行选择的元素和当前行所选元素最多相隔一列（即位于正下方或者沿对角线向左或者向右的第一个元素）。具体来说，位置
(row, col) 的下一个元素应当是 (row + 1, col - 1)、(row + 1, col) 或者 (row + 1, col + 1) 。

示例 1：
    输入：matrix = [[2,1,3],[6,5,4],[7,8,9]]
    输出：13
    解释：如图所示，为和最小的两条下降路径

示例 2：
    输入：matrix = [[-19,57],[-40,-5]]
    输出：-59
    解释：如图所示，为和最小的下降路径

提示：
    n == matrix.length == matrix[i].length
    1 <= n <= 100
    -100 <= matrix[i][j] <= 100
*/

#include <vector>

using std::vector;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>>& matrix)
    {
        int n = matrix.size();

        // 只有一行一列，没有选择
        if (n == 1)
        {
            return matrix[0][0];
        }

        // 对 matrix 扩充两列，第一列和最后一列用于存放 10001，便于后续程序的边界处理
        int cost[n][n + 2];

        // 拷贝 matrix 第一行；cost 的第一列和最后一列作为扩充列全部填 10001（大于 100*100）
        for (int i = 0; i < n; ++i)
        {
            cost[0][i + 1] = matrix[0][i];
            cost[i][0]     = 10001;
            cost[i][n + 1] = 10001;
        }

        // 计算到达某个坐标的最小和并保存
        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j < n + 1; ++j)
            {
                cost[i][j] =
                    std::min(std::min(cost[i - 1][j - 1], cost[i - 1][j]), cost[i - 1][j + 1]) +
                    matrix[i][j - 1];
            }
        }

        // 从最后一行中找到最小值
        int result = cost[n - 1][1];
        for (int i = 2; i < n + 1; i++)
        {
            result = std::min(result, cost[n - 1][i]);
        }

        return result;
    }
};
