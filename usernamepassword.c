#include<stdio.h>
int main(){
    char username[20]="20";
    int password =12234;
    char arr[20];
    int x;
    scanf("%s",arr);
    scanf("%d",&x);
    if((strcmp(username,arr)==0)&&(password==x))
    printf("login successful");
    else printf("failed");
    return 0;
}