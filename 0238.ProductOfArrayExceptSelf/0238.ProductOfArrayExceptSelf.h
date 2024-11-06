#pragma once

/*
给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。

题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。

请不要使用除法，且在 O(n) 时间复杂度内完成此题。

示例 1:
    输入: nums = [1,2,3,4]
    输出: [24,12,8,6]

示例 2:
    输入: nums = [-1,1,0,-3,3]
    输出: [0,0,9,0,0]

提示：
    2 <= nums.length <= 10^5
    -30 <= nums[i] <= 30
    保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内


进阶：你可以在 O(1) 的额外空间复杂度内完成这个题目吗？（ 出于对空间复杂度分析的目的，输出数组不被视为 额外空间。）
*/

#include <vector>

using std::vector;

class Solution
{
public:
    // ON 空间复杂度的实现
    vector<int> productExceptSelf_On(vector<int>& nums)
    {
        int len = nums.size();
        vector<int> answer(len, 1);
        vector<int> prefix(len, 1);
        vector<int> suffix(len, 1);

        // 计算前缀
        for (int i = 1; i < len; ++i)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // 计算后缀
        for (int i = len - 2; i >= 0; --i)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // 计算 answer
        for (int i = 0; i < len; ++i)
        {
            answer[i] = prefix[i] * suffix[i];
        }

        return answer;
    }

    // O1 空间复杂度的实现
    vector<int> productExceptSelf_O1(vector<int>& nums)
    {
        int         len = nums.size();
        vector<int> answer(len, 1);

        // 计算前缀
        for (int i = 1; i < len; ++i)
        {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        // 计算 answer
        int suffix_product = 1;
        for (int i = len - 1; i >= 0; --i)
        {
            answer[i] *= suffix_product;
            suffix_product *= nums[i];
        }

        return answer;
    }
};
