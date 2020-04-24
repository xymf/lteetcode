/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x) {
    int num[10] = {0};
    int i = 0;
    int j = 0;
    int first = 0;
    int last = 0;
    if (x < 0)
    {
        return false;

    }

    while (x != 0)
    {
        num[i++] = x%10;
        x = x / 10;
        
    }
    for (j = 0; j < i; j++)
    {
        if (num[j] != num[i-j-1])
        {
            return false;
        }
    }
    return true;
}

// @lc code=end

