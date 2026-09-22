#include<stdio.h>

int main(){
    int n,m;
    int x = 1;
    int p = 0;
    scanf("%d",&n);
    while(n>1){
        n--;
        x*=10;//确定x位数
    }
    int i = x;
    int t = x; 
    while(i<x*10){
        p = 0;
        m = i;
        while(m>0){
            int sum = 1;
            int d = m % 10;
            m/=10;
            int pm = t;
        while(pm>0){
            sum*=d;
            pm/=10;
        }
        p+=sum;
    }
        if(p==i)printf("%d\n",p);
        i++;
    }
    return 0;
}