#include<stdio.h>
int main(){
    char c;
    scanf("%C",&c);
    if((c>='A')&&(c<='Z'))printf("it is an uppercae");
    else if((c>='a')&&(c<='z'))printf("it is an lowercase");
    printf("%c",89);
    return 0;
}