// Your code here...
Here is a C program to perform the bitwise OR operation on two integers and print the result:

```c
#include <stdio.h>

int main() {
    int num1, num2, result;

    // Ask user to input two integers
    
    scanf("%d", &num1);
  
    scanf("%d", &num2);

    // Perform bitwise OR operation
    result = num1 | num2;

    // Display the result
    printf("The result of bitwise OR operation on %d and %d is: %d\n", num1, num2, result);

    return 0;
}
