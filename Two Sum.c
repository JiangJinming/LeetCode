//
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* twoSum(int* nums, int numsSize, int target) {
    int x, y;
    int *ret = (int *)malloc(sizeof(int) * 2);
    int i;
    int j;

    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target)
            {
                x = i;
                y = j;
            }
        }
    }
    ret[0] = x;
    ret[1] = y;

    return ret;
}
