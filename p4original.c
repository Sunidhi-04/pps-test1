#include<stdio.h>
void change(int a)
{
  a=20;
}
int main()
{
  int a=5;
  change(a);
  printf("%d\n",a);
  return 0;
}
