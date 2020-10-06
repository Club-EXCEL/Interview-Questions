#include<stdio.h>
int main()
{
  int k,d[1000];
  char c[1000];
  int n,t;
  scanf("%d",&t );
  while(t--)
  {
    scanf("%d%d",&n ,&k);
    for(int i=0;i<n;i++)
    {
      scanf("%d", &d[i]);
      if(d[i]%k==0)
        printf("%c",'1');
      else
        printf("%c",'0');
    }
    printf("\n");
  }
  return 0;
}
