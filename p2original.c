#include<stdio.h>

int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}

int cmp(int a,int b,int c)
{
  int max;
  if (a>b && a>c)
  max = a;
  else if (b>c)
  max = b;
  else
  max = c;
  return max;
}

void output(int a,int b,int c,int max)
{
  printf("Largest of three number is %d\n",max);
}

int main()
{
  int a, b, c, max;
  a = input();
  b = input();
  c = input();
  max = cmp(a,b,c);
  output(a,b,c,max);
  return 0;
}