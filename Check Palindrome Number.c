#include <stdio.h>

int main() {
    int n, original, reversed = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
