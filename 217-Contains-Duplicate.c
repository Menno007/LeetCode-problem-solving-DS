#include <stdbool.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize) {
    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    // Use a two-pointer technique to check for adjacent duplicates
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;  // Duplicate found
        }
    }

    return false;  // No duplicates found
}
