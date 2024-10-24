#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_MONTHS 3
#define DAYS_IN_MONTH {29, 30, 31}
#define HOURS_IN_DAY 24

// Function to generate random temperature readings
int generateTemperature() {
    return rand() % 51 - -10; // Generate random temperature between -10 and 50
}

int main() {
    /// random number generator
    srand(time(NULL));

    ///Define days in each month
    int days[NUM_MONTHS] = DAYS_IN_MONTH;

    ///imulate temperature data for each month
    int temperatures[NUM_MONTHS][HOURS_IN_DAY][31];
    for (int month = 0; month < NUM_MONTHS; month++) {
        for (int day = 0; day < days[month]; day++) {
            for (int hour = 0; hour < HOURS_IN_DAY; hour++) {
                temperatures[month][hour][day] = generateTemperature();
            }
        }
    }

    ///Analysis
    for (int month = 0; month < NUM_MONTHS; month++) {
        int lowestTempDropsMidnight = 0;
        float highestTempFluctuation = 0;
        int totalFluctuations = 0;

        for (int day = 0; day < days[month]; day++) {
            int midnightTemp = temperatures[month][0][day];
            if (midnightTemp < 0) {
                lowestTempDropsMidnight++;
            }

            int maxTemp = -100; // Initialize to very low value
            int minTemp = 100; // Initialize to very high value

            for (int hour = 0; hour < HOURS_IN_DAY; hour++) {
                int temp = temperatures[month][hour][day];
                if (temp > maxTemp) {
                    maxTemp = temp;
                }
                if (temp < minTemp) {
                    minTemp = temp;
                }
            }

            int temperatureFluctuation = maxTemp - minTemp;
            if (temperatureFluctuation > 0) {
                highestTempFluctuation += temperatureFluctuation;
                totalFluctuations++;
            }
        }

        highestTempFluctuation /= totalFluctuations; // Calculate average
        printf("Month %d:\n", month + 1);
        printf("Average lowest temperature drops below 0 at midnight: %d occurrences\n", lowestTempDropsMidnight);
        printf("Average highest temperature fluctuations: %.2f degrees\n", highestTempFluctuation);
    }

    return 0;
}
