#include<stdio.h>
#include <stdlib.h>
int cmpInt(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);  
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmpInt);
    for(int i=0;i<n;i++)printf("%d ",a[i]);
}