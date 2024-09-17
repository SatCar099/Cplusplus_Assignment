#include <iostream>
#include "hacker.h"


hacker::Point() {
    x = 0;
    y = 0;
}


hacker::Point(int a) {
    x = a;
    y = 0;
}


hacker::Point(int a, int b) {
    x = a;
    y = b;
}


void hacker::display() {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}