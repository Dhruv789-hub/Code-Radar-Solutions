#include <stdio.h>
int main()
{
    int n,no=1,nsp;
    
    scanf("%d",&n);
    nsp=n-1;
    for(int i=1;i<=n;i++)
    { 
      for(int k=1;k<=nsp;k++)
      {
          printf(" ");
      }
      nsp--;
      for(int j=1;j<=no;j++)
        {
            printf("%d ",j);
        }
        no=no+1;
        printf("\n");
    }

    return 0;
}  