/*
给你一个字符串?s，它由数字（'0' - '9'）和?'#'?组成。我们希望按下述规则将?s?映射为一些小写英文字符：

字符（'a' - 'i'）分别用（'1' -?'9'）表示。
字符（'j' - 'z'）分别用（'10#'?-?'26#'）表示。?
返回映射之后形成的新字符串。

题目数据保证映射始终唯一。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/decrypt-string-from-alphabet-to-integer-mapping
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

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
/*
作者：vvonderful-bhaskaraqnf
链接：https://leetcode.cn/problems/decrypt-string-from-alphabet-to-integer-mapping/solution/fan-xiang-bian-li-by-vvonderful-bhaskara-rdbo/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
