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
| 0160 | [Intersection of Two Linked Lists（相交链表）](https://leetcode.cn/problems/intersection-of-two-linked-lists/) | [C++](0160.IntersectionOfTwoLinkedLists/0160.IntersectionOfTwoLinkedLists.h) | Easy | 双指针法 |                                                             |
| 0167 | []()                                                         |                                                              |            | [note](./0167.TwoSumII/README.md)                            |
| 0189 | [Rotate Array](https://leetcode.com/problems/rotate-array/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/0189.RotateArray/0189.RotateArray.h) | Easy       |                                                              |
| 0206 | [Reverse Linked List （反转链表）](https://leetcode.com/problems/reverse-linked-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0206.ReverseLinkedList/0206.ReverseLinkedList.h) | Easy       |                                                              |
| 0215 | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0215.KthLargestElementInAnArray/0215.KthLargestElementInAnArray.h) | Medium | |
| 0217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0217.ContainsDuplicate/0217.ContainsDuplicate.h) | Easy       |                                                              |
| 0221 | [Maximal Square（最大正方形）](https://leetcode.com/problems/maximal-square/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0221.MaximalSquare/0221.MaximalSquare.h) | Medium | |
| 0226 | [Invert Binary Tree(翻转二叉树)](https://leetcode.com/problems/invert-binary-tree/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0226.InvertBinaryTree/0226.InvertBinaryTree.h) | Easy | |
| 0236 | [Lowest Common Ancestor of a Binary Tree(二叉树的最近公共祖先)](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0236.LowestCommonAncestorOfABinaryTree/0236.LowestCommonAncestorOfABinaryTree.h) | Easy | |
| 0238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0238.ProductOfArrayExceptSelf/0238.ProductOfArrayExceptSelf.h) | Medium | |
| 0283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)    | [C++](https://github.com/CPythoner/LeetCode/blob/master/0283.MoveZeroes/0283.MoveZeroes.h) | Easy       |                                                              |
| 0328 | [Odd Even Linked List](<https://leetcode.com/problems/odd-even-linked-list/>) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0328.OddEvenLinkedList/0328.OddEvenLinkedList.h) | Medium     |                                                              |
| 0344 | [Reverse String](https://leetcode.com/problems/reverse-string/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0344.ReverseString/0344.ReverseString.h) | Easy       |                                                              |
| 0350 | [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0350.IntersectionofTwoArraysII/0350.IntersectionofTwoArraysII.h) | Easy       |                                                              |
| 0455 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0455.AssignCookies/0455.AssignCookies.h) | Easy | |
| 0707 | [Design Linked List](https://leetcode.com/problems/design-linked-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0707.DesignLinkedList/0707.DesignLinkedList.h) | Easy       | [Note](https://github.com/CPythoner/LeetCode/tree/master/0707.DesignLinkedList/note) |
| 0724 | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0724.FindPivotIndex/0724.FindPivotIndex.h) | Easy       |                                                              |
| 0746 | [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0746/0746.MinCostClimbingStairs/0746.MinCostClimbingStairs.h) | Easy       |                                                              |
| 0747 | [Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0747.LargestNumberAtLeastTwiceofOthers/0747.LargestNumberAtLeastTwiceofOthers.h) | Easy       |                                                              |
| 0931 | [Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0931.MinimumFallingPathSum/0931.MinimumFallingPathSum.h) | Medium     |                                                              |
| 1114 | [Print in Order](https://leetcode.com/problems/print-in-order/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/1114.PrintinOrder/1114.PrintinOrder.h) | Easy       |                                                              |
| 1115 | [Print FooBar Alternately](https://leetcode-cn.com/problems/print-foobar-alternately) | [C++](https://github.com/CPythoner/LeetCode/blob/master/1115.PrintFooBarAlternately/1115.PrintFooBarAlternately.h) | Medium     |                                                              |
| 1116 | [Print Zero Even Odd](https://leetcode.com/problems/print-zero-even-odd/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/1116.PrintZeroEvenOdd/1116.PrintZeroEvenOdd.h) | Medium     |                                                              |
| 1117 | [Building H2O](https://leetcode.com/problems/building-h2o/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/1117.BuildingH2O/1117.BuildingH2O.h?1564579372144) | Hard       |                                                              |
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
