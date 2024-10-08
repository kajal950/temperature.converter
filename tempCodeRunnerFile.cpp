#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Kelvin
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

// Function to convert Fahrenheit to Kelvin
float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

// Function to convert Kelvin to Fahrenheit
float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main() {
    int choice;
    float temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    switch (choice) {
        case 1:
            cout << temperature << " Celsius = " << celsiusToFahrenheit(temperature) << " Fahrenheit";
            break;
        case 2:
            cout << temperature << " Fahrenheit = " << fahrenheitToCelsius(temperature) << " Celsius";
            break;
        case 3:
            cout << temperature << " Celsius = " << celsiusToKelvin(temperature) << " Kelvin";
            break;
        case 4:
            cout << temperature << " Kelvin = " << kelvinToCelsius(temperature) << " Celsius";
            break;
        case 5:
            cout << temperature << " Fahrenheit = " << fahrenheitToKelvin(temperature) << " Kelvin";
            break;
        case 6:
            cout << temperature << " Kelvin = " << kelvinToFahrenheit(temperature) << " Fahrenheit";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}