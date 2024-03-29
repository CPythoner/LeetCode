#pragma once

/*
0344. 反转字符串
编写一个函数，其作用是将输入的字符串反转过来。

示例 1:
    输入: "hello"
    输出: "olleh"
示例 2:
    输入: "A man, a plan, a canal: Panama"
    输出: "amanaP :lanac a ,nalp a ,nam A"
*/
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string reverseString(string s) {
        size_t len = s.length();
        for (size_t i = 0; i < len / 2; i++)
        {
            swap(s[i], s[len - i - 1]);
        }
        return s;
    }
};
