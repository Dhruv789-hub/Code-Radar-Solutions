#include <stdio.h>
int main()
{
    int n=1,2,3,4,5,6,7,8,9,0;
    scanf("%d",&n);
    a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }

    }
    
     if(a==0)
    {
        printf(" Prime");
    }
    else{
        printf("Not Prime");
    }
}