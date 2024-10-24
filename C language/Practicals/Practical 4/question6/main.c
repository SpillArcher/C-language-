#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define frequency 60


/**6. Create a structure named 'CircuitComponents' that contains the resistance (in ohms),
inductance (in henry), and capacitance (in farads) of an RLC circuit. Write a program that
prompts the user to input the values of these components and calculates the total impedance
of the circuit using the formula Z = sqrt((R2) + (X2)), where X is the reactance given by X = 2fL
- 1/(2fC), and f is the frequency (60 Hz). Finally, display the impedance**/



///Structure called CircuitComponents

typedef struct
{
    int resistance; ///Variable Declaration
    int inductance;
    int capacitance;
}CircuitComponents;



int main()
{
  CircuitComponents r; /// struct variable declaration

  printf("Enter Resistance(ohms) : "); ///Prompt input from user
  scanf("%d",&r.resistance);
  printf("Enter Inductance(H) : ");
  scanf("%d",&r.inductance);
  printf("Enter Capacitance(F) : ");
  scanf("%d",&r.capacitance);
  printf("\n");

  float R =r.resistance;
  printf("R = %.2f\n",R);

  float Xl=2.0*frequency*r.inductance; ///Inductance calulation
  printf("Xl = %.2f\n",Xl);

  float Xc=1.0/(2.0*frequency*r.capacitance); ///Capacitance Calculation
  printf("Xc = %.8f\n",Xc);

  float X;

  X=Xl-Xc;
  printf("X= %f\n",X);
  printf("\n");


  float impedance;

  impedance=sqrt(pow(R,2) + pow(X,2)); ///Calculation of Impedance

  ///Print Output

  printf("Result of Impedance : %f\n\n",impedance);


    return 0;
}
