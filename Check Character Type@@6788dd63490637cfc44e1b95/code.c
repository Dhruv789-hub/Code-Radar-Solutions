#include <stdio.h>
int main() {
   char ch;
   int a;
   scanf("%d",&a);
   if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
   {
    printf("Vowel");
   }
   else if(a>=0 && a<=9)
   {
    printf("Digit");
   }
    return 0;
}