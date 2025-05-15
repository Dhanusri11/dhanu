#include<stdio.h>

int main() 
{
  int x;
  int flag=0;
  scanf("%d",&x);
  for(int i=2;i<=x;i++)
  {
    if(x%i==0)
     flag++;
  }
  if(flag==0)
  printf("%d is a primenumber",x);
  else
  printf("%d not a prime number",x);
   return 0;
}