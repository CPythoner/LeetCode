#include "list_utils.h"

/**
 * @brief 从数组创建链表的实现
 *
 * 按照数组顺序创建单链表，数组的每个元素对应一个链表节点。
 *
 * @param values 输入数组
 * @return ListNode* 返回创建的链表头节点
 */
ListNode* createList(const std::vector<int>& values) {
    if (values.empty()) return nullptr;

    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;

    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }

    return head;
}

/**
 * @brief 清理链表的实现
 *
 * 按顺序删除链表中的所有节点。
 *
 * @param head 链表头节点
 */
void cleanupList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}
