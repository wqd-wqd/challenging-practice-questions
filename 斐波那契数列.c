#include<stdio.h>

int main(){
    int n,i;
    double sum = 0.0;
    double a,b,c;
    scanf("%d",&n);
    a = 2.0;
    b = 1.0;
    for(i=1;i<=n;i++){
        sum+=a/b;
        c=b;
        b=a;
        a=a+c;
    }
    printf("%.2f",sum);
    return 0;
}