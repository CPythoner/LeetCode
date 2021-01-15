### 1.描述

Given an array `nums` of *n* integers, are there elements *a*, *b*, *c* in `nums` such that *a* + *b* + *c* = 0? Find all unique triplets in the array which gives the sum of zero.

Notice that the solution set must not contain duplicate triplets.

 

**Example 1:**

```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
```

**Example 2:**

```
Input: nums = []
Output: []
```

**Example 3:**

```
Input: nums = [0]
Output: []
```

**Constraints:**

- 0 <= nums.length <= 3000
- -10<sup>5</sup> <= nums[i] <= 10<sup>5</sup>



### 2. 解题思路

求是否存在三个元素和为0，也就是存在 `a+b+c=0`，变换一下思路：`a+b=-c`，这就变成了是否存在两个元素和为 `-c`。但是即便这样，和 LeetCode 第1题 `Two Sum` 不同的是，该题**乱序、有重复数字、有多组解**。



说一下解题思路，还是使用 **排序+双指针** 的方法：

- 要判断数组长度，长度小于 3 返回空数组；
- 对数组进行排序；
- 对特殊情况判断：如果排序后的数组最后三个数之和小于 0，那么数组中不可能存在 三个和为0的数；
- 接下来就要进行遍历了，最外层循环的取值范围为 **[0, len - 2)**，len 为数组长度：
  - 首先判断第一个数是否大于0、前三个数之和是否大于0，如果两个条件有一个满足，那么后面就不可能存在三个和为0的数；
  - 然后是**去重**：如果` i > 0`（确保前面有数）并且和前一个数相等，则跳出本次循环继续向后遍历；
  - 接下来定义两个指针：`left = i + i`，`right = len - 1`，比较 `nums[left] + nums[right]` 与 `-nums[i]` 的大小：
    - `nums[left] + nums[right] < -nums[i]`：左指针右移；
    - `nums[left] + nums[right] > -nums[i]`：右指针左移；
    - `nums[left] + nums[right] = -nums[i]`：这种情况已经找到了解，先把三个数放到结果中，然后左指针右移、右指针左移，接下来是对 left 和 right 之间的数进行去重：满足`left < right && nums[left] == nums[left - 1]`条件，左指针右移；满足 `left < right && nums[right] == nums[right + 1]`条件，右指针左移。



### 3. 代码实现及复杂度分析

**复杂度分析：**

* 时间复杂度：O(n<sup>2</sup>)
* 空间复杂度：O(1)

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> result = {};

        // 长度不符合
        if (len < 3)
            return result;

        // 对 vector 进行排序
        sort(nums.begin(), nums.end());

        // 最后三个数的和小于0，那么不可能存在和为 0  的三个数
        if (nums[len - 3] + nums[len - 2] + nums[len - 1] < 0)
            return result;

        for (int i = 0; i < len - 2; ++i) {
            // 该数大于0 或者 前三个数之和大于0，那么后面不可能存在和为 0 的三个数
            if (nums[i] > 0 || nums[i] + nums[i + 1] + nums[i + 2] > 0)
                return result;

            // 去重
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1, right = nums.size() - 1;
            int sum = 0, target = -nums[i];
            while (left < right) {
                sum = nums[left] + nums[right];
                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else {
                    // 将结果添加到 result 中
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    // 左端去重
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    // 右端去重
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        return result;
    }
};
```



该解法时间击败 99.66%，内存击败100%的用户。

![](https://image-bed-1254282033.cos.ap-beijing.myqcloud.com/img/1d9bfd64573a62b054e2a7d6cbb7620.png)



### 4. 测试

使用 Catch2 进行测试，项目配置详见 [github](https://github.com/CPythoner/LeetCode)

```cpp
#include "0015.3Sum.h"
#include "../utils/utils.h"
#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include <vector>

using namespace std;

TEST_CASE("ThreeSum", "[threeSum]")
{
    Solution solution;

    SECTION("1")
    {
        vector<vector<int>> expected_result{{-1, -1, 2}, {-1, 0, 1}};   // 因为已经排序了，所以可以固定两个vector顺序
        vector<int> nums{-1, 0, 1, 2, -1, -4};
        vector<vector<int>> result = solution.threeSum(nums);
        REQUIRE(result.size() == 2);
        if (result.size() == 2) {
            REQUIRE(CompareVectorsIgnoreOrder(result[0], expected_result[0]));
            REQUIRE(CompareVectorsIgnoreOrder(result[1], expected_result[1]));
        }

    }
    SECTION("2")
    {
        vector<int> nums{0};
        vector<vector<int>> result = solution.threeSum(nums);
        REQUIRE(result.size() == 0);
    }
    SECTION("3")
    {
        vector<int> nums{0};
        vector<vector<int>> result = solution.threeSum(nums);
        REQUIRE(result.size() == 0);
    }
}
```