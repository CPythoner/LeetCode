#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        int sum = 0;
        while (left < right)
        {
            sum = numbers[left] + numbers[right];
            if (sum == target)
            {
                return {left + 1, right + 1};
            }

            if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
};
