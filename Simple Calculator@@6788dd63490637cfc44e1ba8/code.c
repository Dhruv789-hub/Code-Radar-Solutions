// Your code here...
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    getchar() ;
    scanf("%c",&ch);
    if(ch== '+')
    {
        printf("%d",a+b);
    }
    else if(ch== '-')
    {
        printf("%d",a-b);
    }
    else if(ch== '*')
    {
        printf("%d",a*b);
    }
    else if(ch== '/')
    {
        printf("%d",a/b);
    }
    else
    {
        printf("error");
    }
    return 0;
}
 work as expected.