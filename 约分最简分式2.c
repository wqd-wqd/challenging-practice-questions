/*分数可以表示为分子/分母的形式。编写一个程序，要求用户输入一个分数，然后将其约分为最简分式。
最简分式是指分子和分母不具有可以约分的成分了。如6/12可以被约分为1/2。
当分子大于分母时，不需要表达为整数又分数的形式，即11/8还是11/8；
而当分子分母相等时，仍然表达为1/1的分数形式。*/
#include<stdio.h>

int main(){
    int a,b,x;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    int m =a,n=b;
    if(a>b){
    for(;b!=0;){
        x=a%b;
        a=b;
        b=x;
    }
    printf("%d/%d",m/a,n/a);
}else if(a<b){
    for(;a!=0;){
        x=b%a;
        b=a;
        a=x;
    }
    printf("%d/%d",m/b,n/b);
}else{
    printf("1/1");
}
return 0;
}