/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char* longestCommonPrefix(char** strs, int strsSize) {//char** str表示数组strs中存储的是char*元素可以视作为二维数组

	int i = 0;
	int j = 0;
	int l = 0;
    if ( strsSize==0)
	{
		return "";
	}
	for ( i = 0; i < strlen(strs[0]); i++)//strlen(strs[0])表示第一个字符串的长度
	{
		for ( j = 1; j < strsSize; j++)
		{
			if (strs[0][i]!=strs[j][i])
			{
				strs[0][i]='\0';
				break;
			}
			 
		}
	 

	}
	return strs[0];
	 

}


// @lc code=end

