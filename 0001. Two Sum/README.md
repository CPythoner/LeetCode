### 描述

Given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have ***exactly\* one solution**, and you may not use the *same* element twice.

You can return the answer in any order.

 

**Example 1:**

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**

```
Input: nums = [3,3], target = 6
Output: [0,1]
```

 

**Constraints:**

- `2 <= nums.length <= 103`
- `-109 <= nums[i] <= 109`
- `-109 <= target <= 109`
- **Only one valid answer exists.**



### 分析

假设有一个数组 `a=[2, 7, 11, 15]`，寻找和为 26 的两个元素的下标。

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/20210107141031.png)



#### 1. 暴力法

暴力法是最容易想到的解决方法，使用两个for循环分别取值相加，计算和是否为 26。

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/20210107141542.png)

假设数组的 size 为 `n`，那么 最外层 `i` 的取值范围为 [0,n-1)

#### 2. Hash 法



#### 3. Hash 法改进





### 代码