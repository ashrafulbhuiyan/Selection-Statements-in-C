#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b,c,in_root,x1,x2,real,imaginary;

    printf("Please enter the coefficients of a , b and c: ");
    scanf ("%f %f %f", &a,&b,&c);

    in_root = ((b*b)- (4*a*c));

    if (a==0)
    {
        printf ("This is not a quadratic equation.");
    }

    else if (in_root > 0)
        {
            x1 = (-b + sqrt(in_root))/(2*a);
            x2 = (-b - sqrt(in_root))/(2*a);
            printf ("The solution of a quadratic equation are X= %f and X' = %f ",x1,x2);
        }

    else if (in_root < 0)
        {
            real = -b/(2*a);
            imaginary = sqrt(-in_root)/(2*a);

            printf ("The solution of a quadratic equation are X = %f+%fi and X'= %f-%fi", real,imaginary,real,imaginary );
        }
    return 0;
}
