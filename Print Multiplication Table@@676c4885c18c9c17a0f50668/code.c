// Your code here...
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1,i<=N*10,i=i+N)
    {
        printf("%d\n",N);
    }
}