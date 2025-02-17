
#include <stdio.h>

int main() {
    int a, b;
    char ch;

    scanf("%d", &a);
    scanf("%d", &b);
    getchar(); // Consume newline before reading character
    scanf("%c", &ch);

    if (ch == '+') {
        printf("%d\n", a + b);
    }
    else if (ch == '-') {
        printf("%d\n", a - b);
    }
    else if (ch == '*') {
        printf("%d\n", a * b);
    }
    else if (ch == '/') {
        if (b != 0)  // Prevent division by zero
            printf("%d\n", a / b);
        else
            printf("error");
    }
    else {
        printf("error");
    }

    return 0;
}
 