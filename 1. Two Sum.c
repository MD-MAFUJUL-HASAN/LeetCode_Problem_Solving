#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100000

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *result = (int *)malloc(2 * sizeof(int));
    int i, complement;
    bool found = false;
    int hash[MAX_SIZE];
    memset(hash, -1, sizeof(hash));
    for (i = 0; i < numsSize; i++)
    {
        complement = target - nums[i];
        if (hash[complement] != -1)
        {
            result[0] = hash[complement];
            result[1] = i;
            found = true;
            break;
        }
        hash[nums[i]] = i;
    }
    if (found)
    {
        *returnSize = 2;
        return result;
    }
    else
    {
        *returnSize = 0;
        return NULL;
    }
}