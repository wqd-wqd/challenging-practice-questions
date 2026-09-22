#include<stdio.h>

int main(){
    int num,x,y;
    int mask=1;
    scanf("%d",&num);
    x=num;
    y=num;
    while(y>9){
        y/=10;
        mask*=10;
    }
    int a= mask;
    do{
        x=num/mask;
        switch(x){
            case 0:printf("a");break;
            case 1:printf("b");break;
            case 2:printf("c");break;
            case 3:printf("d");break;
            case 4:printf("e");break;
            case 5:printf("f");break;
            case 6:printf("g");break;
            case 7:printf("h");break;
            case 8:printf("i");break;
            case 9:printf("j");break;
        }
        int count = 1;
        for(;a>1;count++){
            a/=10;
        }
        switch(count){
            case 2:
            case 6:printf("S");break;
            case 3:
            case 7:printf("B");break;
            case 4:
            case 8:printf("Q");break;
            case 5:printf("W");break;
            case 9:printf("Y");break;
        }
        num%=mask;
        mask/=10;
        a=mask;
    }while(mask>0);
    return 0;
}
ge:a=num%10000;
wan:b=num%100000000%10000;
yi:c=num/100000000;