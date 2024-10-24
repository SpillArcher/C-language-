#include <stdio.h>
#include <math.h>


///Quadratic Equation Solver
int main()
   {

   float a, b, c, discriminant, root1, root2;
    char choice;

    do {
        ///Ask the user to enter coefficients a, b, and c
        printf("Enter coefficients a, b, and c: ");
        scanf("%f %f %f", &a, &b, &c);

        ///Calculate the discriminant (D = b^2 - 4ac)
        discriminant = b * b - 4 * a * c;

        ///Calculating the roots based on the discriminant value
        if (discriminant > 0) {
            ///Roots are both real and different
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root1 = %.2f\n", root1);
            printf("Root2 = %.2f\n", root2);
        } else if (discriminant == 0) {
            ///Roots are both real and the same
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and the same.\n");
            printf("Root1 = Root2 = %.2f\n", root1);
        } else {
            ///Roots are both complex and different
            root1 = -b / (2 * a);
            root2 = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root1 = %.2f + %.2f\n", root1, root2);
            printf("Root2 = %.2f - %.2f\n", root1, root2);
        }

        ///Askinng the user if he or she wants to re-enter coefficients or exit program
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

