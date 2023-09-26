#include <stdio.h>
#include <math.h>

void quadratic_formula() {
    float a, b, c;
    float final1, final2;

    while (true){
        printf("Enter a, b, c (a,b,c): ");
        scanf("%f,%f,%f", &a, &b, &c);

        getchar();

        final1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
        final2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);

        printf("r1 = %.3f", final1);
        printf("\n");
        printf("r2 = %.3f", final2);
        printf("\n\n");
    }
}

int main(){
    quadratic_formula();
    return 0;
}