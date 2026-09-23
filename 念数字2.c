/*输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出fu字。
输入格式：
输入在一行中给出一个整数，如：1234。
提示：整数包括负数、零和正数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。*/
#include<stdio.h>

int main(){
    int a,x,d,mask=1;
    scanf("%d",&a);
    if(a<0){
        printf("fu ");
        a=-a;
    }else if(a==0){
        printf("ling");
        return 0;
    }
    x=a;
    while(x>9){
        x/=10;
        mask*=10;
    }
    for(;mask>0;){
        d=a/mask;
        a%=mask;
        mask/=10;
        switch(d){
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
        }
        if(mask>0){
            printf(" ");
        }
    }
    return 0;
}