#include<stdio.h>

int main(){
    int n;
    int i = 1;
    int j = 1;
    scanf("%d",&n);
    while(i<=n){
        while(j<=i){
            printf("%d*%d=%d",j,i,i*j);
            if(i*j<10){
            printf("   ");
        }else{
            printf("  ");
        }
        j++;
        }
        j = 1;
        i++;
        printf("\n");
    }
    return 0;
} 