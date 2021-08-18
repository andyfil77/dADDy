#include <stdio.h>

#include <stdlib.h>

#include <math.h>

float quadro(double a, double b, double c, double *x1, double *x2, int *solutionNo)
{
    /* ax^2 + bx + c = 0 */
    double D;
    if (a == 0 && b != 0 && c != 0)
        {
            *x1 = -c / b;
            *solutionNo = 1;
        }
    else if ( a == 0 && b == 0 && c == 0)
        {
            *solutionNo = 3;
        }
    else if ( a == 0 && b == 0 && c != 0)
        {
            *solutionNo = 0;
        }
    else
        {
        D = b * b - 4 * a * c;
        if (D > 0)
        {
            *x1 = (-b + sqrt(D)) / (2 * a);
			*x2 = (-b - sqrt(D)) / (2 * a);
			*solutionNo = 2;
        }
        else if (D == 0)
        {
            *x1 = -b / (2 * a);
            *solutionNo = 1;
        }
        else
        {
            *solutionNo = 0;
        }
        }
    return 0;
}

int main()
{
    int a, b, c, solutionNo;
    double x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    quadro(a,b,c, &x1, &x2, &solutionNo);
    if (solutionNo == 0)
    {
        printf("the equation hasn't roots");
    }
    else if (solutionNo == 1)
    {
        printf("the equation has one root: %.1f", x1);
    }
    else if (solutionNo == 2)
    {
        printf("the equation has two roots: %.1f %.1f", x1, x2);
    }
    else
    {
        printf("the equation has infinity many roots");
    }
    return 0;
}
