//The sum of the first n natural numbers can be calculated using recursion.

#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sum(int n) {
    if (n == 0) {
        return 0;  // Base case
    }
    return n + sum(n - 1);  // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers is %d\n", num, sum(num));
    return 0;
}
//another examples:-1. Factorial Function 2. Fibonacci Sequence 3. Power of a Number Available on Chat gpt and any search Engine .