#include<stdio.h>
int input_degree()
{
  int n;
  printf("input degree?");
  scanf("%d",&n);
  return n+1;
}
float input_x()
{
  float x;
  printf("enter x?");
  scanf("%f",&x);
  return x;
}
void input_coefficent(int n,float a[n])
{
  printf("input %d coefficents-\n",n);
  for(int i=0;i<n;i+=1)
    scanf("%f",&a[i]);
}
float evaluate_polynomial(int n, float a[n],float x)
{
  float rs=a[0];
  for (int i=1;i<n;i+=1)
    rs=rs*x+a[i];
  return rs;
}
void output(int n,float a[n], float x,float result)
{
  printf("\n");
  for(int i=0;i<n-1;i+=1)
    printf("%f x^%d +",a[i],n-i-1);
  printf("%f,at x=%f\n",a[n-1],x);
  printf("=%f\n",result);
}
int main()
{
  int n= input_degree();
  float x=input_x();
  float ar[n];
  float_coefficents(n,ar);
  output(n,ar,x,evaluate_polynomial(n,ar,x));
}