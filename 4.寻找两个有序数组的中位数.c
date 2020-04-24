/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个有序数组的中位数
 */

// @lc code=start


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
 int *nums3=malloc(sizeof(int)*(nums1Size+nums2Size));
    int i=0,j=0,k=0;
    while(i<nums1Size&&j<nums2Size){
        if(nums1[i]>nums2[j]){
            nums3[k]=nums2[j];
            j++;
            k++;
        }
        else{
            nums3[k]=nums1[i];
            i++;
            k++;
        }    
    }
    while(i<nums1Size){
        nums3[k]=nums1[i];
        i++,k++;
    }
     while(j<nums2Size){
        nums3[k]=nums2[j];
        j++,k++;
    }    
    return k%2?nums3[k/2]:(nums3[k/2]/2.0+nums3[k/2-1]/2.0);

 
}


// @lc code=end

