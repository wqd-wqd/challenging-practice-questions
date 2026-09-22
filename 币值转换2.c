#include<stdio.h>

int main(){
    int num,x,y;
    int mask=1;
    int started = 0;//前面是否读过非0,读过为1，没读过为0
    int zero_flag = 0;//是否输出过0，输出为1，没输过为0
    scanf("%d",&num);
    if(num == 0){
    printf("a\n");
    return 0;//排除num=0
}
    int ge,wan,yi;//节位
    ge=num%10000;
    wan=num%100000000/10000;
    yi=num/100000000;
    int n9=yi;//亿节
    if(n9!=0){printf("%cY",'a'+n9);
    started=1;}
    // 亿节后的零
    if(yi != 0 && num % 100000000 != 0){
    if(wan != 0 && wan < 1000){//wan节千位
        printf("a");
        zero_flag = 1;
    }
    else if(wan == 0 && ge != 0 && ge < 1000){
        printf("a");
        zero_flag = 1;
    }
}
    int n5=wan%10;//万
    int n6=wan%100/10;
    int n7=wan%1000/100;
    int n8=wan/1000;
    if(n8!=0){printf("%cQ",'a'+n8);
        started=1;
        zero_flag=0;}else if(started&&wan%1000!=0&&!zero_flag){
            printf("a");
            zero_flag=1;}
    if(n7!=0){printf("%cB",'a'+n7);
        started=1;
        zero_flag=0;}else if(started&&wan%100!=0&&!zero_flag){
            printf("a");
            zero_flag=1;}
    if(n6!=0){printf("%cS",'a'+n6);
        started=1;
        zero_flag=0;}else if(started&&wan%10!=0&&!zero_flag){
            printf("a");
            zero_flag=1;}
    if(n5!=0){printf("%c",'a'+n5);
        started=1;
        zero_flag=0;}
    if(wan!=0){printf("W");}
    if(wan!=0&&ge!=0&&!zero_flag&&(wan%10==0||ge<1000)){
        printf("a");
        zero_flag=1;
    }
    int n1=ge%10;//个
    int n2=ge%100/10;
    int n3=ge%1000/100;
    int n4=ge/1000;
    if(n4!=0){printf("%cQ",'a'+n4);
        started=1;
        zero_flag=0;
    }else if(started&&ge%1000!=0&&!zero_flag){
        printf("a");
        zero_flag=1;}
    if(n3!=0){printf("%cB",'a'+n3);
    started=1;
        zero_flag=0;
    }else if(started&&ge%100!=0&&!zero_flag){
        printf("a");
        zero_flag=1;}
    if(n2!=0){printf("%cS",'a'+n2);
    started=1;
        zero_flag=0;
    }else if(started&&ge%10!=0&&!zero_flag){
        printf("a");
        zero_flag=1;}
    if(n1!=0){printf("%c",'a'+n1);
    }
    return 0;
}