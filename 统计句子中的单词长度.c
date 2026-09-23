/*读入一行文本，以 ! 结束。
文本中可能包含字母、数字、符号、空格。
你需要找出其中所有连续的字母（a~z 和 A~Z），并输出每个字母块的长度。

注意：
字母块由连续的字母组成。
数字、符号、空格都是分隔符。
连续的分隔符不产生空字母块。
! 是结束符，不属于任何字母块。
输出格式：长度之间用一个空格隔开，行末不能有空格。*/
#include<stdio.h>

int main(){
    char c=0;
    int first=1,in=0,count=0;
    while(scanf("%c",&c)==1&&c!='!'){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            in=1;
            count++;
        }else{
            if(in==1&&first==1){
                printf("%d",count);
                first=0;
            }else if(in==1&&first!=1){
            printf(" %d",count);
            }
            count = 0;
            in=0;
        }
    }
    if(in==1){
        if(first==1){
        printf("%d",count);
    }else{
        printf(" %d",count);
    }
}
    return 0;
}