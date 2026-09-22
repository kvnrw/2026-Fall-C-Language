#include <stdio.h>

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    printf("Sum: %d\n", x+y);
    printf("Difference: %d\n", x-y);
    printf("Product: %d\n", x*y);
    printf("Quotient: %d\n", x/y);
    printf("Remainder: %d\n", x%y);

    return 0;
}
