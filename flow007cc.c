#include <stdio.h>
int main()
{
  int n,t,reverse,rem;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d", &n);
   reverse=0;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("%d\n",reverse);
 }
  return 0;
}
