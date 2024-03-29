#pragma once

/* 0003 无重复字符的最长子串
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
*/
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0)
            return 0;

        vector<int> pos(128, 0);
        int i = 0;
        int max_len = 0;

        for (int idx = 0; idx < s.size(); idx++)
        {
            char tmp = s[idx];
            if (pos[tmp] != 0)    // 表示该字符出现过
                i = max(i, pos[tmp]);

            pos[tmp] = idx + 1;
            max_len = max(max_len, idx - i + 1);
        }

        return max_len;
    }
};
