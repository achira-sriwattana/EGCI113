#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void quadratic_formula() {
    float a, b, c, d;
    float final1, final2;

    while (true) {
        printf("\n\nEnter a, b, c (a,b,c): ");
        scanf("%f,%f,%f", &a, &b, &c);

        getchar();

        // ax^2 + bx + c

        if ((a == 0) && (b == 0)) {
            printf("Calculating: %.3f=0\n", c);
            printf("Both a and b are 0, no real solutions.\n\n");
        }
        else if (a == 0) {
            // x = -c/b
            printf("A is 0, calculating: -%.3f/%.3f = 0\n", c,b);
            float x = -c / b;
            printf("X = %.3f\n\n", x);
        }
        else {
            printf("Calculating: %.3fx^2 + %.3fx + %.3f = 0\n", a,b,c);
            // Check for discriminant:
            // b^2 - 4ac
            d = (pow(b, 2)) - (4 * a * c);
            if (d < 0) {
                printf("No real solutions, discriminant is negative: %.3f", d);
                printf("\n\n");
            }
            else {
                final1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
                final2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

                if (final1 == final2) {
                    printf("X = %.3f\n\n", final1);
                }
                else {
                    printf("r1 = %.3f", final1);
                    printf("\n");
                    printf("r2 = %.3f", final2);
                    printf("\n\n");
                }
            }
        }
    }
}

int main() {
    quadratic_formula();
    return 0;
}
