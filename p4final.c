#include<stdio.h>
int input()
{
  int a;
  printf("Enter a Number");
  scanf("%d",&a);
  return a;
}
int largest(int a, int b,int c)
{ 
  if (a>b&&a>c){
return a;}
else if (b>a&&b>c){
return b;}
 else {
return c;}
  }
void output(int a, int b, int c, int greatest)
{
  printf("The greatest Number of %d, %d, %d is %d", a, b, c, greatest);
}
int main()
{
  int x, y, z, l;
  x=input();
  y=input();
  z=input();
  l=largest(x,y,z);
  output(x,y,z,l);
  

}