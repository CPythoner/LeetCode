#pragma once

/*
0217. Contains Duplicate
给定一个整数数组，判断是否存在重复元素。

如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。

示例 1:
    输入: [1,2,3,1]
    输出: true
示例 2:
    输入: [1,2,3,4]
    输出: false
示例 3:
    输入: [1,1,1,3,3,4,3,2,4,2]
    输出: true
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // 解法1：暴力检测
    bool containsDuplicate(vector<int>& nums) {
        size_t len = nums.size();
        if (len <= 1) return false;

        for (size_t i = 0; i < len; i++)
        {
            for (size_t j = i + 1; j < len; j++)
            {
                if (nums[i] == nums[j])
                    return true;
            }
        }

        return false;
    }
    // 解法2：利用另一个 vector 辅助检测
    bool containsDuplicate2(vector<int>&nums) {
        if (nums.empty()) return false;

        vector<int> tmp;
        vector<int>::iterator itTmp;

        tmp.push_back(nums[0]);

        for (size_t i = 1; i < nums.size(); ++i)
        {
            itTmp = std::find(tmp.begin(), tmp.end(), nums[i]);
            if (itTmp != tmp.end())
                return true;
            else
                tmp.push_back(nums[i]);
        }

        return false;
    }
    // 解法3：先排序，再检查相邻元素
    bool containsDuplicate3(vector<int>& nums) {
        if (nums.empty()) return false;

        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};
