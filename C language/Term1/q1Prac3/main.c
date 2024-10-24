#include <stdio.h>
#include <math.h>
#define PI 3.1415926


///Question 1: Resolving a Series RLC Circuit


///a) Calculate the capacitive reactant and the inductive reactant in the circuit
double capacitive_reactance(double C, double f) {
    return 1 / (2 * PI * f * C);
}

///b) Determine the impedance
double inductive_reactance(double L, double f) {
    return 2 * PI * f * L;
}

double impedance(double R, double Xc, double Xl) {
    return sqrt(pow(R,2) + pow((Xl - Xc), 2));
}

///c) Calculate the rms current in the circuit
double rms_current(double V, double Z) {
    return V / Z;
}


///d) Calculate the voltage across the resistor, the inductor, and the capacitor.
double voltage(double Irms, double X) {
    return Irms * X;
}

///e) How much power is consumed in the circuit?
double power(double Irms, double R) {
    return pow(Irms, 2) * R;
}

///f) What is the resonant frequency of the circuit?
double resonant_frequency(double L, double C) {
    return 1 / (2 * PI * sqrt(L * C));
}

int main() {
    ///Local variable definition
    double C = 40e-6;  // 40 uF
    double L = 100e-3; // 100 mH
    double R = 30;     // 30 ohms
    double V = 15;     // 15V
    double f = 60;     // 60Hz


    ///Function call
    double Xc = capacitive_reactance(C, f);
    double Xl = inductive_reactance(L, f);
    double Z = impedance(R, Xc, Xl);
    double Irms = rms_current(V, Z);

    double Vr = voltage(Irms, R);
    double Vl = voltage(Irms, Xl);
    double Vc = voltage(Irms, Xc);

    double P = power(Irms, R);
    double fr = resonant_frequency(L, C);


    ///Print Function
    printf("Capacitive Reactance: %.2f ohms\n", Xc);
    printf("Inductive Reactance: %.2f ohms\n", Xl);
    printf("Impedance: %.2f ohms\n", Z);
    printf("RMS Current: %.2f A\n", Irms);
    printf("Voltage across Resistor: %.2f V\n", Vr);
    printf("Voltage across Inductor: %.2f V\n", Vl);
    printf("Voltage across Capacitor: %.2f V\n", Vc);
    printf("Power consumed: %.2f W\n", P);
    printf("Resonant frequency: %.2f Hz\n", fr);

    return 0;
}























