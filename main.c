#include <stdio.h>

#include <stdlib.h>

#include <math.h>
float quadro(double a, double b, double c)
{
    /* ax^2 + bx + c = 0 */
    double D, x1, x2;
    if (a == 0 && b != 0 && c != 0)
        {
            x1 = -c / b;
            printf("The equation has one root: %.1f", x1);
        }
    else if ( a == 0 && b == 0 && c == 0)
        {
            printf("The equation has infinitely many roots");
        }
    else if ( a == 0 && b == 0 && c != 0)
        {
            printf ("The equation has no roots");
        }
    else
        {
        D = b * b - 4 * a * c;
        if (D > 0)
        {
            x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			printf("The equation has two roots: %.1f  %.1f", x1, x2);
        }
        else if (D == 0)
        {
            x1 = -b / (2 * a);
            printf("The equation has one root:%.1f", x1);
        }
        else
        {
            printf ("The equation has no roots");
        }
        }
    return 0;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    quadro(a,b,c);
    return 0;
}
