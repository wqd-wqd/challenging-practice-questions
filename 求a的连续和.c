#include<stdio.h>

int main(){
    int a,n,i;
    scanf("%d %d",&a,&n);
    int sum = 0;
    int t = 0;
    for(i=1;i<=n;i++){
        t=t*10+2;
        sum+=t;
    }
    printf("%d",sum);
    return 0;
}