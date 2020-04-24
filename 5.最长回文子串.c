/*
 * @lc app=leetcode.cn id=5 lang=c
 *
 * [5] 最长回文子串
 */

// @lc code=start


char * longestPalindrome(char * s){
    int N = strlen(s), start = 0, len = 0;  // N 字符串长度， start 子串起始位置， len 子串长度
    for (int i = 0; i < N; i++) {   // 奇数长度的回文子串
        int left = i - 1, right = i + 1;
        while (left >= 0 && right < N && s[left] == s[right]){
            left--; right++;            // 以 i 为中心，向两侧延伸，直到不再满足回文
        }                               // left+1 ~ right-1 则为以i为中心的最大回文子串
        if (right - left - 1 > len) {   // 若更长，则保存该子串信息
            start = left + 1;
            len = right - left - 1;
        }
    }
    for (int i = 0; i < N; i++) {   // 偶数长度的回文子串
        int left = i, right = i + 1;    // 以 i+0.5 为中心，向两侧延伸
        while (left >=0 && right < N && s[left] == s[right]) {
            left--, right++;
        }
        if (right - left - 1 > len) {
            start = left + 1;
            len = right - left - 1;
        }
    }
    s[start + len] = '\0';      // 原地修改返回
    return s + start;
}

 

// @lc code=end

