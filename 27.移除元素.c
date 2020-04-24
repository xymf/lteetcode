/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int count=0;
    int temp=0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i]!=val)
        {
            nums[temp++]=nums[i];
            count++;

            /* code */
        }
        
        /* code */
    }
    return count;
    

}


// @lc code=end

