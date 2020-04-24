/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target){
    int count=0;
    for (int i = 0; i < numsSize; i++)
    {   
        if (nums[i]==target)
        {
            return i;
            /* code */
        }
        
        /* code */
    }
    if (target>nums[numsSize-1])
    {
        return  numsSize;/*排除目标元素大于数组中最大的元素*/
        /* code */
    }
    
    for (int j = 0; j < numsSize; j++)
    {
        if (target>nums[j]&&target<nums[j+1])/*要保证新添加的元素处于两个元素之间*/
        {
            return j+1;
         }
        
    }

    return 0;

}


// @lc code=end

