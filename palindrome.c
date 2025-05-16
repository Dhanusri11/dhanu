#include <stdio.h>
int main() {
    int x;
    scanf ("%d",&x);
    int y=x;
    int ans= 0;
    while(x>0){
      int r=x%10;
      ans=ans*10+r;
      x/=10;
    
      printf("%d\n",ans);
    }
    if(ans==y)
    printf("%d its an palindrome");
    
     else 
         printf("%d is not an palindrome");
         
    
    return 0;
}