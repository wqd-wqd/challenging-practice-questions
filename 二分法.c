#include<stdio.h>

int main(){
    double a3,a2,a1,a0;
    scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
    double fa,a,fb,b,fm;
    scanf("%lf %lf",&a,&b);
    double m;
    while(b-a>=0.0001){
        m=(a+b)/2;
        fa=a3*a*a*a+a2*a*a+a1*a+a0;
        fb=a3*b*b*b+a2*b*b+a1*b+a0;
        fm=a3*m*m*m+a2*m*m+a1*m+a0;
        if(fm==0){
            break;
        }else if(fm*fa>0){
            a=m;
        }else if(fm*fb>0){
            b=m;
        }
    }
        printf("%.2f",(a+b)/2);
        return 0;
}