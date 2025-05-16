#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=1,b=1,c=2;
    int d=0;
    for(int i=1;i<=x;i++){
        if(i==1)printf("%d\n",a);
        else if(i==2)printf("%d\n",b);
        else if(i==3)printf("%d\n",c);
       else{
           int d=a+b+c;
           printf("%d\n",d);
           a=b;
           b=c;
           c=d;
       }
}
}