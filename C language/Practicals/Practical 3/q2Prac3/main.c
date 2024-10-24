#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846


void calculate_impedance_current(double frequency, double resistance, double inductance, double capacitance, double *impedance, double *current_resistor, double *current_inductor,
                                  double *current_capacitor);

int main() {
    ///Local variable definition
    double frequency = 60;        // 60 Hz
    double resistance = 30;       // 30 ohm
    double inductance = 100e-3;   // 100mH
    double capacitance = 40e-6;   // 40µF


    double impedance, current_resistor, current_inductor, current_capacitor;

    ///Calling Function
    calculate_impedance_current(frequency, resistance, inductance, capacitance, &impedance, &current_resistor, &current_inductor, &current_capacitor);

    ///Print it out
    printf("Impedance: %.4f ohms\n", impedance);
    printf("Current flowing through resistor: %.4f A\n", current_resistor);
    printf("Current flowing through inductor: %.4f A\n", current_inductor);
    printf("Current flowing through capacitor: %.4f A\n", current_capacitor);

    return 0;
}


void calculate_impedance_current(double frequency, double resistance, double inductance, double capacitance, double *impedance, double *current_resistor, double *current_inductor,
                                  double *current_capacitor) {
    ///Calculate impedance
    double capacitive_reactance = 1.0 / (2 * PI * frequency * capacitance);
    double inductive_reactance = 2 * PI * frequency * inductance;
    *impedance = 1 / (1 / resistance + 1 / capacitive_reactance + 1 / inductive_reactance);

    ///Calculate currents
    *current_resistor = 1 / resistance;
    *current_inductor = 1 / inductive_reactance;
    *current_capacitor = 1 / capacitive_reactance;
}
