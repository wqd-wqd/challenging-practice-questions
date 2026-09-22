#include<stdio.h>

int main(){
    int a,b,c;
    char ch;
    scanf("%d%c%d",&a,&ch,&b);
    if(a<b){
        for(int i=a;i>0;i--){
            if(b%i==0){
                printf("%d%c%d",a/i,ch,b/i);
                break;
            }
        }
    }
    if(a>b){
        for(int i=b;i>0;i--){
            if(a%i==0){
                printf("%d%c%d",a/i,ch,b/i);
                break;
            }
        }
    }else if(a==b){
        printf("%d%c%d",a,ch,b);
    }
    return 0;
}