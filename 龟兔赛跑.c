#include<stdio.h>

int main(){
    int rabbit = 0;
    int turtle = 0;
    int T,i;
    int timer = 0;
    int state = 1;//0为休息1为跑
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        timer++;
        turtle+=3;
        if(state){
            rabbit+=9;
            if(timer==10){
                timer=0;
                if(rabbit>turtle){
                    state = 0;
                }
            }
        }else{
            if(timer==30){
                state = 1;
                timer = 0;
            }
        }
    }
    if(rabbit>turtle){
        printf("^_^ %d\n",rabbit);
    }else if(rabbit<turtle){
        printf("@_@ %d\n",turtle);
    }else{
        printf("-_- %d\n",rabbit);
    }
    return 0;
}