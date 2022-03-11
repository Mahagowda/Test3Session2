#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("enter the total number of objects and the number of objects you choosen\n");
  scanf("%d%d",n,r);
}
int ncr(int n,int r)
{
  int i,fact_n=1,fact_r=1,fact_n_r=1,ncr;
  for (i=1;i<=n;i++)
  {
    fact_n=fact_n*i;
  }
  for(i=1;i<=r;i++)
  {
    fact_r=fact_r*i;
  }
  for(i=1;i<=n-r;i++)
  {
  fact_n_r=fact_n_r*i;
  }
  ncr=fact_n/(fact_r*fact_n_r);
  return ncr;
}
void  output(int n,int r,int result)
{
  printf("the combination of %d and %d is %d",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result= ncr(n,r);
  output(n,r,result);
  return 0;
}