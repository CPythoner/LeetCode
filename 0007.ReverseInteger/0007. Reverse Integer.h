#pragma once

/*
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

示例 1:
    输入: 123
    输出: 321

    示例 2:
    输入: -123
    输出: -321
示例 3:
    输入: 120
    输出: 21

注意:
    假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−2^31,  2^31 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
*/

#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long t = abs(x);
        long long result = 0;

        while (t)
        {
            result = t % 10 + 10 * result;
            t /= 10;
        }

        if (result < -2147483648 || result > 2147483647)
            result = 0;

        return x >= 0 ? result : -result;
    }
};
