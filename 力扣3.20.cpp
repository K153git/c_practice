/*
nums1?������?x?�� ��һ������Ԫ�� ��ָ?x?��?nums2 �ж�Ӧλ�� �Ҳ� �� ��һ�� ��?x?���Ԫ�ء�

�������� û���ظ�Ԫ�� ������?nums1 ��?nums2 ���±�� 0 ��ʼ����������nums1?��?nums2?���Ӽ���

����ÿ�� 0 <= i < nums1.length ���ҳ����� nums1[i] == nums2[j] ���±� j �������� nums2 ȷ�� nums2[j] �� ��һ������Ԫ�� �������������һ������Ԫ�أ���ô���β�ѯ�Ĵ��� -1 ��

����һ������Ϊ?nums1.length ������ ans ��Ϊ�𰸣����� ans[i] ������������ ��һ������Ԫ�� ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode.cn/problems/next-greater-element-i
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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
