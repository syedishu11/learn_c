 //Find sum of series: 1 2 3 4 5 .... n 

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
// Find product of series: 1 2 3 4 5 .... n 


#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product = %llu\n", product);
    return 0;
}
