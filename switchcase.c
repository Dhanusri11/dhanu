#include <stdio.h>
#include <limits.h>
int main() {
    int num,year;
    scanf("%d",&num,&year);
    switch(num){
        case 1:
         printf("january");
         printf("31");
         break;
        case 2:
         printf("february");
          if(((year%4==0)&&(year%100!=0))||(year%400==0)){
            printf("29");
                  }
           else{
              printf("28");
              }
         break;
        case 3:
         printf("march");
         printf("31 days");
         break; 
        case 4:
         printf("april");
         printf("30 days");
        
         break;
        case 5:
         printf("june");
         printf("31 days");
         break;
        default:
          printf("invalid");
    }
    return 0;
}