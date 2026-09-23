/*题目：统计句子中的数字个数
题目描述
读入一行文本，以 # 结束。文本中可能包含字母、符号、空格和数字。
你需要找出其中所有连续的数字，并输出每个数字串的位数（即数字的个数）。

注意：
数字串由连续的数字字符（0~9）组成。
字母、符号、空格都是分隔符。
连续的分隔符不产生空数字串。
# 是结束符，不属于任何数字串。
输出格式：每个数字串的位数之间用一个空格隔开，行末不能有空格。
输入格式
一行文本，以 # 结束。
输出格式
每个数字串的位数，用空格隔开，行末无空格。*/
#include<stdio.h>

int main(){
    char c=0;
    int first=1,count=0,in_num=0;
    while(scanf("%c",&c)==1&&c!='#'){
        if(c>='0'&&c<='9'){
            count++;
            in_num=1;
        }else{
            if(in_num==1){
                if(first==1){
            printf("%d",count);
            first=0;
            }else{
                printf(" %d",count);
            }
                count=0;
                in_num=0;
        }
    }
}
    if(in_num==1){
        if(first==1){
            printf("%d",count);
        }else{
            printf(" %d",count);
        }
    }
        return 0;
}