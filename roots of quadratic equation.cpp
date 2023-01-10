#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double root1, root2;

    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c): ";
    cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;

    // real roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "The roots of the equation are: " << root1 << " and " << root2 << endl;
    }
    // equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        cout << "The roots of the equation are: " << root1 << " and " << root2 << endl;
    }
    // imaginary roots
    else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "The roots of the equation are: " << realPart << "+" << imaginaryPart << "i and " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
