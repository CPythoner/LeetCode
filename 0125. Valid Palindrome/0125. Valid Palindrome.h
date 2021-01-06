#pragma	once

/*
0125.验证回文字符串
给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

说明：本题中，我们将空字符串定义为有效的回文串。

示例 1:
    输入: "A man, a plan, a canal: Panama"
    输出 : true

示例 2 :
    输入 : "race a car"
    输出 : false
*/

#include <string>
#include <ctype.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // 字符串为空，则返回true
        if (s.empty()) return true;

        // 设置两个游标
        auto left = s.cbegin();
        auto right = s.cend() - 1;

        while (left < right)
        {
            // 找到左侧为字母或数字的位置
            while (left < right && !isalnum(*left))
                left++;

             // 找到右侧为字母或数字的位置
            while (left < right && !isalnum(*right))
                right--;

            // 转为小写字母后比较两者
            if (tolower(*left) != tolower(*right))
                return false;
            else
            {
                left++;
                right--;
            }
        }

        // 比较完毕
        return true;
    }
};
