#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void quadratic_formula() {
    // ax^2 + bx + c
    float a,b,c;

    while(true){
        printf("Enter a, b and c: (a,b,c): ");
        scanf("%f,%f,%f", &a,&b,&c);
        getchar();

        switch((int)a){
            case 0: printf(""); break;
            case 1: printf("x^2"); break;
            case -1: printf("-x^2"); break;
            default: printf("%.1fx^2",a);
        }

        switch((int)b){
            case 0: printf(""); break;
            case 1: printf("+x"); break;
            case -1: printf("-x"); break;
            // default: printf("%.1fx", b);

            default:
                if ((b > 0) && (a != 0)){
                    printf("+%.1fx", b);
                }
                else{
                    printf("%.1fx", b);
                }

        }

        switch((int)c){
            case 0: printf(""); break;
            // case 1: printf("%.1f", c): break;
            case -1: printf("%.1f", c); break;
            // default: printf("%.1f", c);

            default:
                if ((c > 0) && (b != 0)){
                    printf("+%.1f", c);
                }
                else{
                    printf("%.1f", c);
                }
        }
        puts("=0\n\n");
    }

    

}

int main() {
    quadratic_formula();
    return 0;
}
