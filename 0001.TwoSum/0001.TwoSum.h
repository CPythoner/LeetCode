#pragma once

/*
0001. 两数之和
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

示例 :
    给定 nums = [2, 7, 11, 15], target = 9
    因为 nums[0] + nums[1] = 2 + 7 = 9
    所以返回[0, 1]
*/
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t size_of_nums = nums.size();

        int i = 0, j = 0;
        for (; i < size_of_nums - 1; i++)
        {
            for (j = i + 1; j < size_of_nums; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }

    vector<int> twoSumWithHash(vector<int>& nums, int target) {
        size_t size_of_nums = nums.size();

        unordered_map<int, int> mymap;
        for (int i = 0; i < size_of_nums; i++)
        {
            mymap[nums[i]] = i;
        }

        for (int i = 0; i < size_of_nums - 1; i++)
        {
            const int another = target - nums[i];
            if (mymap.find(another) != mymap.end() && mymap[another] > i)
            {
                return {i, mymap[another]};
            }
        }

        return {};
    }

    vector<int> twoSumWithHash2(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        for (int i = 0; i < nums.size(); i++)
        {
            const int another = target - nums[i];
            if (mymap.find(another) != mymap.end())
            {
                return {mymap[another], i};
            }
            mymap[nums[i]] = i;
        }
        return {};
    }
};
