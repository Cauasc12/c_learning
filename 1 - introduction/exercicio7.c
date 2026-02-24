#include <stdio.h>

int main(){

    float celsius;
    
    printf("Infome a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9/5) + 32; 
    float kelvin = celsius +273.15;


    printf("Celsius: %.2fº\nFahrenheit: %.2fº\nKelvin: %.2fº", celsius, fahrenheit, kelvin);
    
}