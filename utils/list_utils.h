#pragma once

#include <vector>

/**
 * @brief 单链表节点结构
 */
struct ListNode {
    int val;            ///< 节点值
    ListNode *next;     ///< 下一个节点指针

    /**
     * @brief 默认构造函数
     */
    ListNode() : val(0), next(nullptr) {}

    /**
     * @brief 带值的构造函数
     * @param x 节点值
     */
    ListNode(int x) : val(x), next(nullptr) {}

    /**
     * @brief 带值和下一节点指针的构造函数
     * @param x 节点值
     * @param next 下一节点指针
     */
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * @brief 从数组创建链表
 * @param values 输入数组
 * @return 返回创建的链表头节点指针
 */
ListNode* createList(const std::vector<int>& values);

/**
 * @brief 清理链表，释放所有节点的内存
 * @param head 链表头节点
 */
void cleanupList(ListNode* head);
