// // Your code here...
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     char ch;
//     scanf("%c",&ch);
//     if(ch=='+')
//     {
//         printf("%d",a+b);
//     }
//     else if(ch=='-')
//     {
//         printf("%d",a-b);
//     }
//     else if(ch=='*')
//     {
//         printf("%d",a*b);
//     }
//     else if(ch=='/')
//     {
//         printf("%d",a/b);
//     }
//     else{
//         printf("error");
//     }
//     return 0;
// }
The issue in your code lies with the handling of the `scanf` for the `char ch` variable. After reading the integers `a` and `b`, the newline character (`'\n'`) or any other leftover characters in the input buffer can interfere with the subsequent `scanf("%c", &ch)`.

Here's the problem: when you use `scanf("%d", &a)` and `scanf("%d", &b)`, they leave the newline character in the input buffer, which is then read by the next `scanf("%c", &ch)`. As a result, the `scanf("%c")` will immediately read this leftover newline, not the character you're expecting.

### Fix:
You can solve this problem by adding a space before `%c` in the `scanf` for `ch`. This will tell `scanf` to ignore any whitespace (like newline or spaces) before reading the character.

### Corrected Code:

```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);  // Read first integer
    scanf("%d", &b);  // Read second integer
    char ch;
    scanf(" %c", &ch);  // Notice the space before %c

    if(ch == '+') {
        printf("%d", a + b);
    }
    else if(ch == '-') {
        printf("%d", a - b);
    }
    else if(ch == '*') {
        printf("%d", a * b);
    }
    else if(ch == '/') {
        if(b != 0) {
            printf("%d", a / b);
        } else {
            printf("error");  // Division by zero check
        }
    }
    else {
        printf("error");
    }

    return 0;
}
```

### Explanation of Changes:
- The space before `%c` in the `scanf(" %c", &ch);` ensures that any whitespace characters (like newlines or spaces) left in the input buffer are skipped before reading the actual operator.
- I added a division-by-zero check before performing the division. This prevents a runtime error if `b` is zero.

Now, the program will work as expected.