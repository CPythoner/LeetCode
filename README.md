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
| 0001 | [Two Sum](https://leetcode.com/problems/two-sum/)            | [C++](https://github.com/CPythoner/LeetCode/blob/master/0001.TwoSum/0001.TwoSum.h) | Easy       | [note](./0001.TwoSum/README.md)                              |
| 0007 | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0007.ReverseInteger/0007.ReverseInteger.h) | Easy       |                                                              |
| 0008 | [String to Integer](<https://leetcode.com/problems/string-to-integer-atoi/>) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0007.ReverseInteger/0007.ReverseInteger.h) | Medium     |                                                              |
| 0019 | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0019.RemoveNthNodeFromEndofList/0019.RemoveNthNodeFromEndofList.h) | Medium     |                                                              |
| 0026 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0026.RemoveDuplicatesfromSortedArray/0026.RemoveDuplicatesfromSortedArray.h) | Easy       |                                                              |
| 0036 | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/0036.ValidSudoku/0036.ValidSudoku.h) | Medium     |                                                              |
| 0048 | [Rotate Image](https://leetcode.com/problems/rotate-image/)  | [C++](https://github.com/CPythoner/LeetCode/tree/master/0048.RotateImage) | Medium     |                                                              |
| 0062 | [Unique Paths](https://leetcode.com/problems/unique-paths/)  | [C++](https://github.com/CPythoner/LeetCode/tree/master/0062.UniquePaths/0062.UniquePaths.h) | Medium     |                                                              |
| 0066 | [Plus One](https://leetcode.com/problems/plus-one/)          | [C++](https://github.com/CPythoner/LeetCode/blob/master/0066.PlusOne/0066.PlusOne.h) | Easy       |                                                              |
| 0094 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0094.BinaryTreeInorderTraversal/0094.BinaryTreeInorderTraversal.h) | Medium     |                                                              |
| 0101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0101.SymmetricTree/0101.SymmetricTree.h) | Easy       |                                                              |
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0102.BinaryTreeLevelOrderTraversal/0102.BinaryTreeLevelOrderTraversal.h) | Medium     |                                                              |
| 0104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0104.MaximumDepthofBinaryTree/0104.MaximumDepthofBinaryTree.h) | Easy       |                                                              |
| 0105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0105.ConstructBinaryTreefromPreorderandInorderTraversal/0105.ConstructBinaryTreefromPreorderandInorderTraversal.h) | Medium     |                                                              |
| 0106 | [Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0106.ConstructBinaryTreefromInorderandPostorderTraversal/0106.ConstructBinaryTreefromInorderandPostorderTraversal.h) | Medium     |                                                              |
| 0112 | [Path Sum](https://leetcode.com/problems/path-sum/)          | [C++](https://github.com/CPythoner/LeetCode/blob/master/0112.PathSum/0112.PathSum.h) | Easy       |                                                              |
| 0116 | [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0116.PopulatingNextRightPointersinEachNode/0116.PopulatingNextRightPointersinEachNode.h) | Medium     |                                                              |
| 0122 | [Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0122.BestTimeToBuyandSellStockII/0122.BestTimetoBuyandSellStockII.h) | Easy       |                                                              |
| 0125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0125.ValidPalindrome/0125.ValidPalindrome.h) | Easy       |                                                              |
| 0136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0136.SingleNumber/0136.SingleNumber.h) | Easy       |                                                              |
| 0141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0141.LinkedListCycle/0141.LinkedListCycle.h) | Easy       |                                                              |
| 0142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0142.LinkedListCycleII/0142.LinkedListCycleII.h) | Medium     |                                                              |
| 0144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0144.BinaryTreePreorderTraversal/0144.BinaryTreePreorderTraversal.h) | Medium     |                                                              |
| 0145 | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0145.BinaryTreePostorderTraversal/0145.BinaryTreePostorderTraversal.h) | Hard       |                                                              |
| 0160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0160.IntersectionofTwoLinkedLists/0160.IntersectionofTwoLinkedLists.h) | Easy       |                                                              |
| 0167 | []()                                                         |                                                              |            | [note](./0167.TwoSumII/README.md)                            |
| 0189 | [Rotate Array](https://leetcode.com/problems/rotate-array/)  | [C++](https://github.com/CPythoner/LeetCode/blob/master/0189.RotateArray/0189.RotateArray.h) | Easy       |                                                              |
| 0206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0206.ReverseLinkedList/0206.ReverseLinkedList.h) | Easy       |                                                              |
| 0217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0217.ContainsDuplicate/0217.ContainsDuplicate.h) | Easy       |                                                              |
| 0283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)    | [C++](https://github.com/CPythoner/LeetCode/blob/master/0283.MoveZeroes/0283.MoveZeroes.h) | Easy       |                                                              |
| 0328 | [Odd Even Linked List](<https://leetcode.com/problems/odd-even-linked-list/>) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0328.OddEvenLinkedList/0328.OddEvenLinkedList.h) | Medium     |                                                              |
| 0344 | [Reverse String](https://leetcode.com/problems/reverse-string/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0344.ReverseString/0344.ReverseString.h) | Easy       |                                                              |
| 0350 | [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0350.IntersectionofTwoArraysII/0350.IntersectionofTwoArraysII.h) | Easy       |                                                              |
| 0707 | [Design Linked List](https://leetcode.com/problems/design-linked-list/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0707.DesignLinkedList/0707.DesignLinkedList.h) | Easy       | [Note](https://github.com/CPythoner/LeetCode/tree/master/0707.DesignLinkedList/note) |
| 0724 | [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0724.FindPivotIndex/0724.FindPivotIndex.h) | Easy       |                                                              |
| 0746 | [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0746/0746.MinCostClimbingStairs/0746.MinCostClimbingStairs.h) | Easy       |                                                              |
| 0747 | [Largest Number At Least Twice of Others](https://leetcode.com/problems/largest-number-at-least-twice-of-others/) | [C++](https://github.com/CPythoner/LeetCode/blob/master/0747.LargestNumberAtLeastTwiceofOthers/0747.LargestNumberAtLeastTwiceofOthers.h) | Easy       |                                                              |
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
