#include <stdio.h>

int main() {
	
	// Variable declaration
    float celsius, fahrenheit;
    
    // Get temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Convert to Fahrenheit
    // Using 9.0 instead of 9 to ensure floating point division
    fahrenheit = (9.0/5.0)* celsius + 32;
    
    // Display result
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    
    return 0;
}

