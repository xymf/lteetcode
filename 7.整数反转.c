/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start


int reverse(int x){
    long temp=0;
 
  
    while(x!=0)
    {
        temp=temp*10+x%10;
        x=x/10;
    }

  return  temp>2147483647||temp<-2147483648?0:temp;
     
    

}

// @lc code=end

