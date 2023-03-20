/*
nums1?中数字?x?的 下一个更大元素 是指?x?在?nums2 中对应位置 右侧 的 第一个 比?x?大的元素。

给你两个 没有重复元素 的数组?nums1 和?nums2 ，下标从 0 开始计数，其中nums1?是?nums2?的子集。

对于每个 0 <= i < nums1.length ，找出满足 nums1[i] == nums2[j] 的下标 j ，并且在 nums2 确定 nums2[j] 的 下一个更大元素 。如果不存在下一个更大元素，那么本次查询的答案是 -1 。

返回一个长度为?nums1.length 的数组 ans 作为答案，满足 ans[i] 是如上所述的 下一个更大元素 。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/next-greater-element-i
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i=0,k=0,j=0;
    int *ans=(int*)malloc(sizeof(int)*(nums1Size+1));
    for(i=0;i<nums1Size;i++){
        for(j=0;j<nums2Size;j++){
            if(nums2[j]==nums1[i]){
                for(k=j+1;k<nums2Size;k++){
                    if(nums2[k]>nums1[i]){
                        ans[i]=nums2[k];
                        break;
                    }
                }
            }
        }
        if(k==nums2Size){
            ans[i]=-1;
        }
    }
    ans[i]='\0';
    *returnSize=nums1Size;
    return ans;
}
