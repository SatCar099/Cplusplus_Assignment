#include <iostream>
using namespace std;

int main() {
    int num, temp, digits = 0, firstDigit, lastDigit, multiplier = 1;


    cout << "Input any number: ";
    cin >> num;


    temp = num;

    while (temp != 0) {
        temp /= 10;
        digits++;
        multiplier *= 10;
    }

    firstDigit = num / (multiplier / 10);

    lastDigit = num % 10;

    num = num % (multiplier / 10);
    num = num / 10;

    num = num * 10 + lastDigit;
    num = num * (multiplier / 10) + firstDigit;

    cout << "The number after swapping the first and last digits are: " << num << endl;

    return 0;
}