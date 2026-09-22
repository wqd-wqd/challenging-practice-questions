#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,f;
    scanf("%d",&n);
    int now = 1;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        int t = 0;
        scanf("%d",&f);
        t = abs(f-now);
        now = f;
        sum+=t+2;
    }
    printf("总耗时%d",sum);
    return 0;
}