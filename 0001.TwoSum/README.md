### 1. 描述

Given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.

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



### 2. 分析及实现

假设有一个数组 `a=[2, 7, 11, 15]`，寻找和为 26 的两个元素的下标。

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/20210107141031.png)



#### 1. 暴力法

暴力法是最容易想到的解决方法，使用两个for循环分别取值相加，计算和是否为 26。此种方案的时间复杂度为 O(n<sup>2</sup>)

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/20210107141542.png)

假设数组的 size 为 `n`，那么 最外层 `i` 的取值范围为 [0,n-1)，内层 `j` 的取值范围为 [i+1, n-1]。



代码如下：

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    size_t size_of_nums = nums.size();

    int i = 0, j = 0;
    for (; i < size_of_nums - 1; i++)
    {
        for (j = i + 1; j < size_of_nums; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }

    return {};
}
```



#### 2. Hash 法

另一种解法是首先将数组的值都放到一个Hash Map里，数组的值作为 key 值，数组元素的下标作为 value 值；然后遍历数组去找与其对应对的另一元素是否存在 Map 中。这个解决方案的时间复杂度为 O(n)。

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/20210108132934.png)



注意：遍历数组时 `i` 的取值范围为 [0, n-1)，因为前面的数组元素都和最后一个元素进行了匹配。



代码如下：

```cpp
vector<int> twoSumWithHash(vector<int>& nums, int target) {
    size_t size_of_nums = nums.size();

    unordered_map<int, int> mymap;
    for (int i = 0; i < size_of_nums; i++)
    {
        mymap[nums[i]] = i;
    }

    for (int i = 0; i < size_of_nums - 1; i++)
    {
        const int another = target - nums[i];
        if (mymap.find(another) != mymap.end() && mymap[another] > i)
        {
            return {i, mymap[another]};
        }
    }

    return {};
}
```



#### 3. Hash 法改进

上述 Hash 解法需要遍历数组两次，其实可以只遍历一次，不需要一开始就建立好 Map，而是在后面遍历的过程中创建 Map。执行流程如下：

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/20210108143002.png)

需要注意的是：最后返回两个下标要注意顺序，在 Map 中的元素下标是小于正在遍历的数组元素的下标。



代码如下：

```cpp
vector<int> twoSumWithHash2(vector<int>& nums, int target) {
    unordered_map<int, int> mymap;
    for (int i = 0; i < nums.size(); i++)
    {
        const int another = target - nums[i];
        if (mymap.find(another) != mymap.end())
        {
            return {mymap[another], i};
        }
        mymap[nums[i]] = i;
    }
    return {};
}
```



### 3. 测试

使用 Catch2 进行测试，项目配置详见 [github](https://github.com/CPythoner/LeetCode)

```cpp
#include "0001. Two Sum.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>

#include "../utils/utils.h"

using namespace std;

TEST_CASE("Two Sum", "[twoSum]")
{
    Solution solution;

    SECTION("1")
    {
        vector<int> expected_result{0, 1};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSum(nums, 9);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
    SECTION("2")
    {
        vector<int> expected_result{1, 3};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSum(nums, 22);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
}

TEST_CASE("Two Sum Hash", "[Two Sum Hash]")
{
    Solution solution;
    SECTION("1")
    {
        vector<int> expected_result{0, 1};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSumWithHash(nums, 9);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
    SECTION("2")
    {
        vector<int> expected_result{1, 3};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSumWithHash(nums, 22);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
}

TEST_CASE("Two Sum Hash2", "[Two Sum Hash2]")
{
    Solution solution;
    SECTION("1")
    {
        vector<int> expected_result{0, 1};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSumWithHash2(nums, 9);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
    SECTION("2")
    {
        vector<int> expected_result{1, 3};
        vector<int> nums{2, 7, 11, 15};
        vector<int> result = solution.twoSumWithHash2(nums, 22);
        REQUIRE(CompareVectors<int>(expected_result, result) == true);
    }
}
```

