#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, convertedTemperature;

    cout << "Temperature Conversion" << endl;
    cout << "1: Convert Celsius to Fahrenheit" << endl;
    cout << "2: Convert Fahrenheit to Celsius" << endl;
    cout << " enter your choice (1 or 2): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (choice == 1) {
    
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << " Celsius is " << convertedTemperature << " Fahrenheit." << endl;
    } else if (choice == 2) {
       
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << " Fahrenheit is " << convertedTemperature << " Celsius." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}