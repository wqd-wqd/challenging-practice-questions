#include<stdio.h>

int main(){
    int n,m;
    int count = 0;
    int sum = 0;
    scanf("%d,%d",&n,&m);
    if(n==1){
        n=2;
}
    for(int i = n;i <= m;i++){
        int isprime = 1;
        for(int k = 2;k < i;k++){
            if(i%k==0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            count++;
            sum+=i;
        }
    }
    printf("%d,%d",count,sum);
    return 0;
    }