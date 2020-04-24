/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start

int removeDuplicates(int *nums,int numsSize){
    if (numsSize == 0 || numsSize == 1) return numsSize;
    //k为计数器，计算新表里面不相同元素的个数
    int k = 1;
    for (int i = 1;i < numsSize; i++){
        if (nums[i] != nums[i-1]){
            nums[k++] = nums[i];
        }
    }
    return k;
}


// @lc code=end

