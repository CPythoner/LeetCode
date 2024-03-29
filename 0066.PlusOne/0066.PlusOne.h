#pragma once

/*
0066.加一
给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

示例 1:
    输入: [1,2,3]
    输出: [1,2,4]
    解释: 输入数组表示数字 123。
示例 2:
    输入: [4,3,2,1]
    输出: [4,3,2,2]
    解释: 输入数组表示数字 4321。
*/
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int carry = 0;

        if (digits[len-1] != 9)
        {
            digits[len - 1] += 1;
            return digits;
        }
        else
        {
            digits[len - 1] = 0;
            carry = 1;

            for (int i = len - 2; i >= 0; --i)
            {
                int tmp = digits[i] + carry;

                digits[i] = tmp % 10;
                carry = tmp / 10;
            }

            if (digits[0] == 0 && carry == 1)
            {
                digits.insert(digits.begin(), 1);
            }

            return digits;
        }
    }
};
