/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julian Londono
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, check, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    check = b*b - 4*a*c;

    if (check >= 0) {
        x1 = (-b + sqrt(check)) / (2*a);
        x2 = (-b - sqrt(check)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }



    else {
        cout << "No real roots" << endl;
    }

    return 0;
}