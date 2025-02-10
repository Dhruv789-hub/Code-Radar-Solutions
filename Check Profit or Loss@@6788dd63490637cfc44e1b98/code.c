#include <stdio.h>

int main() {
    int cp,sp;
    scanf("%d",&cp);
    scanf("%d",&sp);

    if(sp>cp)
    {
        printf("Profit");
    }
    else 
    {
        printf("Loss");
    }
    return 0;
}