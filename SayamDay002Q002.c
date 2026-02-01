// Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// 
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// 
// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// 
// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]
// 
// Constraints:
// * `2 <= nums.length <= 104`
// * `-109 <= nums[i] <= 109`
// * `-109 <= target <= 109`
// * Only one valid answer exists.
// 
// Follow-up: Can you come up with an algorithm that is less than `O(n2)` time complexity?

#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    
    for (int i=0; i<numsSize; i++) {
        for (int j=i+1; j<numsSize; j++) {
            if (nums[i]+nums[j]==target) {
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return result;
}
int main() {
    int nums1[]={2,7,11,15};
    int target1=9;
    int returnSize;
    int* result1=twoSum(nums1, 4, target1, &returnSize);
    printf("[%d,%d]\n", result1[0], result1[1]);
    free(result1);
    
    int nums2[]={3,2,4};
    int target2=6;
    int* result2=twoSum(nums2, 3, target2, &returnSize);
    printf("[%d,%d]\n", result2[0], result2[1]);
    free(result2);
    
    int nums3[]={3,3};
    int target3=6;
    int* result3=twoSum(nums3, 2, target3, &returnSize);
    printf("[%d,%d]\n", result3[0], result3[1]);
    free(result3);
    return 0;
}