#include<stdio.h>
#include<stdlib.h>


int main()
{
  int T,n,a[1000],f,t;

  scanf("%d",&T);
  for(int i=0;i<T;i++)
  {
    f=0,t=0;
    int flag=0;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
      scanf("%d",&a[j]);
    for(int j=0;j<n;j++)
    {
      if(a[j]==3)
        f++;
      else if(a[j]==6)
        t++;
      while(a[j]>3)
      {
        if(a[j]-6>=3&&t!=0)
        {  t--; a[j]-=6;}
        else if(a[j]-3>=3&&f!=0)
        {  f--; a[j]-=3; }
        else
        {
          flag=1;
          break;
        }
      }
      if(flag==1)
        break;

    }
    if(flag==1)
      printf("NO\n");
    else
      printf("YES\n");

  }


  return 0;
}
