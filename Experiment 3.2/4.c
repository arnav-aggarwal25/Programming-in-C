#include <stdio.h>
#include <math.h> 

int main() {
    double current_population = 100000.0;
    double growth_rate = 0.10; 
    int years = 10;

    printf("Population at the end of each year in the last decade:\n");
    printf("---------------------------------------------------\n");

    for (int i = years; i >= 1; i--) {
        double past_population = current_population / pow(1 + growth_rate, i);
        printf("End of Year %d (ago): %.0f\n", i, past_population);
    }

    return 0;
}
