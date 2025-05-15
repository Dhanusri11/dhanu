#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("x is greater");
    }
    else if(y>x){
        printf("y is greater");
    }
    else printf("both are equal");
    return 0;
}                            