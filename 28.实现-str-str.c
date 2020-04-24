/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start


int strStr(char * haystack, char * needle){
    int max=0;
    int min=0;
    int j=0;
    max=sizeof(haystack);
    min=sizeof(needle);
    for (int i = 0; i < max; i++)
    {
        if (haystack[i]==needle[0])
        {
            while (haystack[i]==needle[j])
            {
                i++;
                j++;
            /* code */
            if (j==min-1)
            {
                return i-j ;
                /* code */
            }
            }
            
            /* code */
        }
        j=0;    
        /* code */
    }
    return -1;
}


// @lc code=end

