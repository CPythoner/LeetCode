#pragma once

/*
0217. Move Zeros
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:
    输入: [0,1,0,3,12]
    输出: [1,3,12,0,0]
说明:
    1.必须在原数组上操作，不能拷贝额外的数组。
    2.尽量减少操作次数。
*/

#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.empty())
            return;

        int size_of_nums = nums.size();
        for (int i = size_of_nums - 1; i >= 0; i--)
        {
            if (nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                nums.insert(nums.end(), 0);
            }
        }
    }

    // 双游标实现
    void moveZeroes2(vector<int>& nums) {
        if (nums.empty())
            return;

        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                nums[j++] = nums[i];
        }

        while (j < nums.size())
            nums[j++] = 0;
    }
};
