/*
��Ŀ����
����һ���ַ���?s���������֣�'0' - '9'����?'#'?��ɡ�����ϣ������������?s?ӳ��ΪһЩСдӢ���ַ���

�ַ���'a' - 'i'���ֱ��ã�'1' -?'9'����ʾ��
�ַ���'j' - 'z'���ֱ��ã�'10#'?-?'26#'����ʾ��?
����ӳ��֮���γɵ����ַ�����

��Ŀ���ݱ�֤ӳ��ʼ��Ψһ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode.cn/problems/decrypt-string-from-alphabet-to-integer-mapping
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� 
*/

//���� 

char * freqAlphabets(char * s){
    char *ans=(char*)malloc(sizeof(char)*(strlen(s)+1));
    int i=0;
    char tmp;
    int index=0;
    for(i=strlen(s)-1;i>=0;--i){
        if(s[i]!='#'){
            ans[index++]='a'+s[i]-'1';
        }
        if(s[i]=='#'){
            ans[index++]=((s[i-1]-'0')+(s[i-2]-'0')*10)-10+'j';
            i-=2;
        }
    }
    ans[index]='\0';
    for(i=0;i<index/2;i++){
        tmp=ans[i];
        ans[i]=ans[index-1-i];
        ans[index-1-i]=tmp;
    }
    return ans;
}

//˼·�����ⷨ������ڣ����ǵ�j�Ժ����ĸ����ΪĩλΪ#�����Գ��Դ�ǰ���������������#ƥ������ָ�����Ȼ��2�����дѭ����Ȼ���ʣ����������������� 
