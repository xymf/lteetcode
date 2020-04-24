/*
 * @lc app=leetcode.cn id=16 lang=c
 *
 * [16] 最接近的三数之和
 */

// @lc code=start


int threeSumClosest(int* nums, int numsSize, int target){
    int sim=0;
    int min=9999999;
    int sum=0;
    int sub=0;
    for (int  i = 0; i < numsSize-2; i++)
    {
        for (int j = 1; j <numsSize-1; j++)
        {
            for (int k = 2; k < numsSize; k++)
            {
                sum=nums[i]+nums[j]+nums[k];//三个数的和；
                sub=abs(sum-target);//三个数和target的差值；
                if (sub<min)
                {
                    min=sub;
                    sim=sum;
                    /* code */
                }
                sum=0;
                
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    
return sim;
}


// @lc code=end

    