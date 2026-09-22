#include<stdio.h>

int main(){
    int n,m,inp;
    int count = 0;
    int finished = 0;
    scanf("%d,%d",&m,&n);//m是输入数，n是次数
    do{
        scanf("%d",&inp);
        count++;
        if(inp<0){
            printf("Game over\n");
            break;
        }
        if(inp>m){
            printf("Too big\n");
        }else if(inp<m){
            printf("Too small\n");
        }else{
            finished = 1;
            if(count == n){
                printf("Game over\n");
                break;
            }else if(count==1){
                printf("Bingo\n");
            }else if(count<=3){
                printf("Lucky You\n");
            }else if(count<n){
                printf("Good Guess\n");
            }
        }
    }while(!finished);//finished为0时循环
    return 0;

}