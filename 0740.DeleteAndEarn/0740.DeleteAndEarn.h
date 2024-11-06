#pragma once

/*
给你一个整数数组 nums ，你可以对它进行一些操作。

每次操作中，选择任意一个 nums[i] ，删除它并获得 nums[i] 的点数。之后，你必须删除 所有 等于 nums[i] -1 和 nums[i] + 1 的元素。

开始你拥有 0 个点数。返回你能通过这些操作获得的最大点数。

示例 1：
    输入：nums = [3,4,2]
    输出：6
    解释：
        删除 4 获得 4 个点数，因此 3 也被删除。
        之后，删除 2 获得 2 个点数。总共获得 6 个点数。

示例 2：
    输入：nums = [2,2,3,3,3,4]
    输出：9
    解释：
        删除 3 获得 3 个点数，接着要删除两个 2 和 4 。
        之后，再次删除 3 获得 3 个点数，再次删除 3 获得 3 个点数。
        总共获得 9 个点数。

提示：
    1 <= nums.length <= 2 * 10^4
    1 <= nums[i] <= 10^4
*/

#include <vector>
#include <algorithm>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution
{
public:
    int deleteAndEarn(vector<int>& nums)
    {
        if (nums.size() == 1)
        {
            return nums[0];
        }

        unordered_map<int, int> m;  // 记录 nums 数组中各个数字的个数
        std::sort(nums.begin(), nums.end());  // 对数组进行排序，便于统计各元素出现次数
        vector<int>             dp = {0, nums[0]};
        m[nums[0]] = 1;

        // 统计各个元素出现次数
        for (int i = 1; i < nums.size(); ++i)
        {
            ++m[nums[i]];
            if (nums[i] != dp.back())
            {
                dp.push_back(nums[i]);
            }
        }

        int last = dp[1];

        dp[1] *= m[dp[1]];

        for (int i = 2; i < dp.size(); ++i)
        {
            if (dp[i] - last == 1) // 两个数相邻，需要决策如何利益最大化
            {
                last = dp[i];
                dp[i] = std::max(dp[i - 1], dp[i - 2] + dp[i] * m[dp[i]]);
            }
            else
            {
                last = dp[i];
                dp[i] = dp[i - 1] + dp[i] * m[dp[i]];
            }
        }

        return dp[dp.size() - 1];
    }
};
