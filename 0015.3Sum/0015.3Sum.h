#pragma once

#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> result = {};

        // 长度不符合
        if (len < 3)
            return result;

        // 对 vector 进行排序
        sort(nums.begin(), nums.end());

        // 最后三个数的和小于0，那么不可能存在和为 0  的三个数
        if (nums[len - 3] + nums[len - 2] + nums[len - 1] < 0)
            return result;

        for (int i = 0; i < len - 2; ++i) {
            // 该数大于0 或者 前三个数之和大于0，那么后面不可能存在和为 0 的三个数
            if (nums[i] > 0 || nums[i] + nums[i + 1] + nums[i + 2] > 0)
                return result;

            // 去重
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1, right = len - 1;
            int sum = 0, target = -nums[i];
            while (left < right) {
                sum = nums[left] + nums[right];
                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else {
                    // 将结果添加到 result 中
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    // 左端去重
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    // 右端去重
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        return result;
    }
};
