#pragma once

#include <set>
#include <vector>

/**
 * @brief 比较两个 vector 是否相等
 *
 * @tparam T 支持 == 运算符进行比较的类型
 * @param vec1
 * @param vec2
 * @return true     两个 vector 相等
 * @return false    两个 vector 不相等
 */
template <typename T>
bool CompareVectors(std::vector<T> const &vec1, std::vector<T> const &vec2)
{
    if (vec1.size() != vec2.size())
        return false;

    for (int i = 0; i < vec1.size(); i++)
    {
        if (vec1[i] != vec2[i])
            return false;
    }
    return true;
}

/**
 * @brief 比较两个 vector 是否相等，忽略两个 vector 的元素顺序
 *
 * @tparam T 支持 == 运算符进行比较的类型
 * @param vec1
 * @param vec2
 * @return true     两个 vector 相等
 * @return false    两个 vector 不相等
 */
template <typename T>
bool CompareVectorsIgnoreOrder(std::vector<T> const &vec1, std::vector<T> const &vec2)
{
    if (vec1.size() != vec2.size())
        return false;

    std::set<T> set1(vec1.begin(), vec1.end());
    std::set<T> set2(vec2.begin(), vec2.end());

    return set1 == set2;
}
