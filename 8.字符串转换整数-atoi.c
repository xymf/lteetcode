/*
 * @lc app=leetcode.cn id=8 lang=c
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start


int myAtoi(char* str) {
    long ret = 0;
    int flag = 1;//默认正数
    //去除空格及判断符号位
    for (; *str == 32; str++);
    switch (*str) {
    case 45:
        flag = -1;
    case 43:
        str++;
    }
    //排除非数字的情况
    if (*str < 48 || *str>57) return 0;
    
    while (*str >= 48 && *str <= 57) {
        ret = ret * 10 + (*str - 48);
        //判断溢出
        if ((int)ret != ret) {
            return (flag == 1) ? (INT_MAX) : (INT_MIN);
        }
        str++;
    }
    ret *= flag;
    return (int)ret;
}



/*提交时踩得坑：

出现'+-2':一开始选择使用两个if，结果输出了2 (= =!)，之后选择用switch解决这种问题。
出现远超出long储存范围的值（若此时先处理数字再判断溢出会导致ret的溢出）

作者：non1th
链接：https://leetcode-cn.com/problems/string-to-integer-atoi/solution/cyu-yan-jie-fa-ji-si-lu-by-non1th/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。







/*int myAtoi(char * str){
int str_length=0;
int i=0;
int j=0;
int sum=0;
int temp[5000]={0};
str_length=sizeof(str);
if (str_length==0)
{
    return 0;
    
}

while (str[i]!=0)
{
    
}

for (int i = 0; i < str_length; i++)
{
    while (str[i]!=" ")
    {
        
        if (str[i]=="-")
        {
            temp[0]="-";
            j=1;
            while (str[i+1]>0&&str[i+1]<9)
            {
                temp[j++]=str[i+1];
                i++;

                
            }
            
           
        }else
        { while (str[i+1]>0&&str[i+1]<9)
            {
                temp[j++]=str[i+1];
                i++;

                 
            }
             
        }
        
        
    }
    
     
}
for (int i = 0; i < j; i++)
{
    if (temp[0]=="-")
    {
        sum=sum+temp[i+1]*10;
         
    }else
    {
        sum=sum+temp[i]*10;
    }
    
    
 
}
return temp[0]=="-"?(-sum):sum;

}
*/

// @lc code=end

