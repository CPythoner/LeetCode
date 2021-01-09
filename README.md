![LeetCode](https://github.com/CPythoner/LeetCode/blob/master/cover.png?raw=true)

- [1. 项目说明](#1-项目说明)
- [2. 题目列表](#2-题目列表)
- [3. 数据结构分类](#3-数据结构分类)
  - [3.1 数组与矩阵](#31-数组与矩阵)
  - [3.2 链表](#32-链表)
  - [3.3 字符串](#33-字符串)
  - [3.4 栈和队列](#34-栈和队列)
  - [3.5 树](#35-树)
  - [3.6 图](#36-图)
  - [3.7 位运算](#37-位运算)
  - [3.8 哈希表](#38-哈希表)
- [4. 解法分类](#4-解法分类)
  - [4.1 双指针](#41-双指针)
  - [4.2 排序](#42-排序)
  - [4.3 二分查找](#43-二分查找)
  - [4.4 贪心算法](#44-贪心算法)
  - [4.5 分治](#45-分治)
  - [4.6 搜索](#46-搜索)
  - [4.7 动态规划](#47-动态规划)
  - [4.8 数学](#48-数学)


# 1. 项目说明

C++代码工程使用 CMake 创建并测试。



测试依赖：

- [Catch2](https://github.com/catchorg/Catch2)



# 2. 题目列表

|  #   | Title                                                        | Solution                                                     | Difficulty | Note                                                         |
| :--: | :----------------------------------------------------------- | :----------------------------------------------------------- | :--------- | ------------------------------------------------------------ |
| 0001 | [Two Sum](https://leetcode.com/problems/two-sum/)            | [C++](https://github.com/CPythoner/LeetCode/blob/master/0001.%20Two%20Sum/0001.%20Two%20Sum.h) | Easy       | [note](./0001.TwoSum/README.md)                              |
| 0007 | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0007.%20Reverse%20Integer/0007.%20Reverse%20Integer.h) | Easy       |                                                              |
| 0008 | [String to Integer](<https://leetcode.com/problems/string-to-integer-atoi/>) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0007.%20Reverse%20Integer/0007.%20Reverse%20Integer.h) | Medium     |                                                              |
| 0019 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0019.%20Remove%20Nth%20Node%20From%20End%20of%20List/0019.%20Remove%20Nth%20Node%20From%20End%20of%20List.h) | Medium     |                                                              |
| 0026 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0026.%20Remove%20Duplicates%20from%20Sorted%20Array/0026.%20Remove%20Duplicates%20from%20Sorted%20Array.h) | Easy       |                                                              |
| 0036 | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/0036.%20Valid%20Sudoku/0036.%20Valid%20Sudoku.h) | Medium     |                                                              |
| 0048 | [Rotate Image](https://leetcode.com/problems/rotate-image/)  | [C++](https://github.com/CPythoner/LeetCode/tree/master/0048.%20Rotate%20Image) | Medium     |                                                              |
| 0066 | [Plus One](https://leetcode.com/problems/plus-one/)          | [C++](https://github.com/CPythoner/LeetCode/blob/master/0066.%20Plus%20One/0066.%20Plus%20One.h) | Easy       |                                                              |
| 0094 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0094.%20Binary%20Tree%20Inorder%20Traversal/0094.%20Binary%20Tree%20Inorder%20Traversal.h) | Medium     |                                                              |
| 0101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0101.%20Symmetric%20Tree/0101.%20Symmetric%20Tree.h) | Easy       |                                                              |
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0102.%20Binary%20Tree%20Level%20Order%20Traversal/0102.%20Binary%20Tree%20Level%20Order%20Traversal.h) | Medium     |                                                              |
| 0104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0104.%20Maximum%20Depth%20of%20Binary%20Tree/0104.%20Maximum%20Depth%20of%20Binary%20Tree.h) | Easy       |                                                              |
| 0105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0105.%20Construct%20Binary%20Tree%20from%20Preorder%20and%20Inorder%20Traversal/0105.%20Construct%20Binary%20Tree%20from%20Preorder%20and%20Inorder%20Traversal.h) | Medium     |                                                              |
| 0106 | [Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0106.%20Construct%20Binary%20Tree%20from%20Inorder%20and%20Postorder%20Traversal/0106.%20Construct%20Binary%20Tree%20from%20Inorder%20and%20Postorder%20Traversal.h) | Medium     |                                                              |
| 0112 | [Path Sum](https://leetcode.com/problems/path-sum/)          | [C++](https://github.com/CPythoner/LeetCode/blob/master/0112.%20Path%20Sum/0112.%20Path%20Sum.h) | Easy       |                                                              |
| 0116 | [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0116.%20Populating%20Next%20Right%20Pointers%20in%20Each%20Node/0116.%20Populating%20Next%20Right%20Pointers%20in%20Each%20Node.h) | Medium     |                                                              |
| 0122 | [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II/0122.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II.h) | Easy       |                                                              |
| 0125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0125.%20Valid%20Palindrome/0125.%20Valid%20Palindrome.h) | Easy       |                                                              |
| 0136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0136.%20Single%20Number/0136.%20Single%20Number.h) | Easy       |                                                              |
| 0141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0141.%20Linked%20List%20Cycle/0141.%20Linked%20List%20Cycle.h) | Easy       |                                                              |
| 0142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0142.%20Linked%20List%20Cycle%20II/0142.%20Linked%20List%20Cycle%20II.h) | Medium     |                                                              |
| 0144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0144.%20Binary%20Tree%20Preorder%20Traversal/0144.%20Binary%20Tree%20Preorder%20Traversal.h) | Medium     |                                                              |
| 0145 | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0145.%20Binary%20Tree%20Postorder%20Traversal/0145.%20Binary%20Tree%20Postorder%20Traversal.h) | Hard       |                                                              |
| 0160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0160.%20Intersection%20of%20Two%20Linked%20Lists/0160.%20Intersection%20of%20Two%20Linked%20Lists.h) | Easy       |                                                              |
| 0167 | []()                                                         |                                                              |            | [note](./0167.TwoSumII/README.md)                            |
| 0189 | [Rotate Array](https://leetcode.com/problems/rotate-array/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/0189.%20Rotate%20Array/0189.%20Rotate%20Array.h) | Easy       |                                                              |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0206.%20Reverse%20Linked%20List/0206.%20Reverse%20Linked%20List.h) | Easy       |                                                              |
| 0217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0217.%20Contains%20Duplicate/0217.%20Contains%20Duplicate.h) | Easy       |                                                              |
| 0283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)    | [C++](https://github.com/CPythoner/LeetCode/blob/master/0283.%20Move%20Zeroes/0283.%20Move%20Zeroes.h) | Easy       |                                                              |
| 0328 | [Odd Even Linked List](<https://leetcode.com/problems/odd-even-linked-list/>) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0328.%20Odd%20Even%20Linked%20List/0328.%20Odd%20Even%20Linked%20List.h) | Medium     |                                                              |
| 0344 | [Reverse String](https://leetcode.com/problems/reverse-string/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0344.%20Reverse%20String/0344.%20Reverse%20String.h) | Easy       |                                                              |
| 0350 | [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0350.%20Intersection%20of%20Two%20Arrays%20II/0350.%20Intersection%20of%20Two%20Arrays%20II.h) | Easy       |                                                              |
| 0707 | [Design Linked List](https://leetcode.com/problems/design-linked-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0707.%20Design%20Linked%20List/0707.%20Design%20Linked%20List.h) | Easy       | [Note](https://github.com/CPythoner/LeetCode/tree/master/0707.%20Design%20Linked%20List/note) |
| 0724 | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0724.%20Find%20Pivot%20Index/0724.%20Find%20Pivot%20Index.h) | Easy       |                                                              |
| 0747 | [Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0747.%20Largest%20Number%20At%20Least%20Twice%20of%20Others/0747.%20Largest%20Number%20At%20Least%20Twice%20of%20Others.h) | Easy       |                                                              |
| 1114 | [Print in Order](https://leetcode.com/problems/print-in-order/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/1114.%20Print%20in%20Order/1114.%20Print%20in%20Order.h) | Easy       |                                                              |
| 1115 | [Print FooBar Alternately](https://leetcode-cn.com/problems/print-foobar-alternately) | [C++](https://github.com/CPythoner/LeetCode/blob/master/1115.%20Print%20FooBar%20Alternately/1115.%20Print%20FooBar%20Alternately.h) | Medium     |                                                              |
| 1116 | [Print Zero Even Odd](https://leetcode.com/problems/print-zero-even-odd/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/1116.%20Print%20Zero%20Even%20Odd/1116.%20Print%20Zero%20Even%20Odd.h) | Medium     |                                                              |
| 1117 | [Building H2O](https://leetcode.com/problems/building-h2o/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/1117.%20Building%20H2O/1117.%20Building%20H2O.h?1564579372144) | Hard       |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |
|      |                                                              |                                                              |            |                                                              |



# 3. 数据结构分类

## 3.1 数组与矩阵



## 3.2 链表



## 3.3 字符串



## 3.4 栈和队列



## 3.5 树



## 3.6 图



## 3.7 位运算



## 3.8 哈希表





# 4. 解法分类

## 4.1 双指针



## 4.2 排序



## 4.3 二分查找



## 4.4 贪心算法



## 4.5 分治



## 4.6 搜索



## 4.7 动态规划



## 4.8 数学
