/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
   int *lst = (int*)malloc(sizeof(int) * 2);

lst[0] = 0;

lst[1] = 0;
for (int i = 0; i<numsSize - 1; i++)
{
	for (int j = i + 1; j<numsSize; j++)
	{
		if (nums[i] + nums[j] == target)
		{
			lst[0] = i;
			lst[1] = j;
			*returnSize = 2;
			return lst;
		}
	}
}
return 0;
 
}

// @lc code=end

