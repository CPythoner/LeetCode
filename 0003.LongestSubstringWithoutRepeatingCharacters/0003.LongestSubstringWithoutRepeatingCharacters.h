#pragma once

/*
给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。

示例 1:
    输入: s = "abcabcbb"
    输出: 3
    解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。

示例 2:
    输入: s = "bbbbb"
    输出: 1
    解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。

示例 3:
    输入: s = "pwwkew"
    输出: 3
    解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
         请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。

示例 4:
    输入: s = ""
    输出: 0

提示：
    0 <= s.length <= 5 * 10^4
    s 由英文字母、数字、符号和空格组成
*/
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 如果字符串为空，则直接返回0
        if (s.length() == 0)
            return 0;

        // 初始化字符位置数组，ASCII码大小为128
        vector<int> pos(128, 0);
        // 初始化子串起始位置i为0
        int i = 0;
        // 初始化最大长度为0
        int max_len = 0;

        // 遍历字符串中的每个字符
        for (int idx = 0; idx < s.size(); idx++)
        {
            // 获取当前字符
            char tmp = s[idx];
            // 如果当前字符之前出现过，并且上次出现的位置在当前子串起始位置i之后
            if (pos[tmp] != 0 && pos[tmp] > i)
                // 更新子串起始位置为当前字符上次出现位置的下一个位置
                i = pos[tmp];

            // 更新当前字符的位置为当前位置的下一个位置
            pos[tmp] = idx + 1;
            // 更新最大长度
            max_len = max(max_len, idx - i + 1);
        }

        // 返回最大长度
        return max_len;
    }
};
