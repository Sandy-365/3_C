#include <stdio.h>

int main() {
    int n, num, count = 0;
    scanf("%d", &n);  // Read the number of elements in the array

    if (n < 1 || n > 75) {  // Check if the input of n is within the given constraints
        printf("Wrong data entered\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);  // Read each element of the array
        if (num == 0) {
            count++;  // Increment the count if the element is zero
        }
    }

    printf("%d\n", count);  // Print the count of zeros in the array
    return 0;
}