/*Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should return an empty array.

For example:
sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}
sortNumbers({}) // should return {}*/

#include <vector>

std::vector<int> solution(std::vector<int> nums) {
if (nums.size()==0) return nums;
  for (unsigned long k = 0; k < nums.size() - 1; ++k) {
        int minl = k;
        for (unsigned long l = k + 1; l < nums.size(); ++l) {
            if (nums[l] <= nums[minl]) {
                minl = l;
            }
        }
        std::swap(nums[k], nums[minl]);
    }
return nums;
}
