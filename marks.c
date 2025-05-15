#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int  total=m1+m2+m3+m4+m5;
    float average;
    average=total/5;
    printf("total:%d",total);
    printf("average:%f",average);
    return 0;
}