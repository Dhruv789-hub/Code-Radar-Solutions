// Your code here...
#include <stdio.h>
int main()
{
    int n;
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
    if(n==0 || n==1)
    {
        printf("Invalid");
    }
    else if(a==0)
    {
        printf(" Prime");
    }
    else{
        printf("Not Prime");
    }
}