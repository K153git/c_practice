/*
给你一个长度为 n?的整数数组 nums ，和一个长度为 m 的整数数组 queries 。

返回一个长度为 m 的数组 answer ，其中 answer[i] 是 nums 中 元素之和小于等于 queries[i] 的 子序列 的 最大 长度? 。

子序列 是由一个数组删除某些元素（也可以不删除）但不改变剩余元素顺序得到的一个数组。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/longest-subsequence-with-limited-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/


int* answerQueries(int* nums, int numsSize, int* queries, int queriesSize, int* returnSize){
     *returnSize=queriesSize;
    
    int cmp(const void *a, const void *b){
        return *(int*)a-*(int*)b;
    }
    int pcmp(const void *a, const void *b){
        return queries[*(int*)a]-queries[*(int*)b];
    }
    int pq[queriesSize];
    for(int i=0;i<queriesSize;i++)pq[i]=i;
    qsort(nums,numsSize,sizeof(int),cmp);
    qsort(pq,queriesSize,sizeof(int),pcmp);

    int* rst=(int*)malloc(sizeof(int)*queriesSize);
    int i,s=0,j=0,tar;
    for(i=0;i<queriesSize;i++){
        tar=queries[pq[i]];
        for(;j<numsSize&&s<=tar;j++){
            s+=nums[j];
        }
        if(s<=tar)break;
        rst[pq[i]]=j-1;
    }
    for(;i<queriesSize;i++){
        rst[pq[i]]=numsSize;
    }

    return rst;
}
