#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2; // The function must return two indices
    int* result = (int*)malloc(sizeof(int) * 2);

    // Brute-force: Check all pairs of elements
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // Return indices if the sum matches the target
            }
        }
    }

    return NULL; // Return NULL if no solution is found (this shouldn't happen in the given problem constraints)
}