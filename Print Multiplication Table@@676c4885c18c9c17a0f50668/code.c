// Your code here...
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=N;i<=N*10;i=i+N)
    {
        printf("%d x %d\n",N,i);
    }
}