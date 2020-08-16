/* sum and difference of two number using pointer to functions */

#include<stdio.h>
int sum(int a, int b)
{
   return a+b;
}
int diff(int a, int b)
{
 return a-b;
}

int main()
{
  int (*oper)(int a, int b);
  oper=sum;
  printf("%d\n",oper(3,4));
  oper=diff;
  printf("%d",oper(3,4));
  return 0;
  
}
