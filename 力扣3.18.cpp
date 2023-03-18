/*
����һ������Ϊ n?���������� nums ����һ������Ϊ m ���������� queries ��

����һ������Ϊ m ������ answer ������ answer[i] �� nums �� Ԫ��֮��С�ڵ��� queries[i] �� ������ �� ��� ����? ��

������ ����һ������ɾ��ĳЩԪ�أ�Ҳ���Բ�ɾ���������ı�ʣ��Ԫ��˳��õ���һ�����顣

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode.cn/problems/longest-subsequence-with-limited-sum
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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
