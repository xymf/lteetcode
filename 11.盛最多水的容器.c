/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start


int maxArea(int* height, int heightSize) {
    int sum = 0;
    int i = 0;
    int j = 0;
    int max = 0;

    for (i = 0; i < heightSize-1; i++)
    {
        for (j = i + 1; j < heightSize; j++)
        {
            sum = height[i] > height[j] ? height[j] * (j - i) : height[i] * (j - i);
            if (sum>max)
            {
                max = sum;
            }
        }
    }

 
        return max;

}

// @lc code=end

