#include <iostream>

using namespace std;

double calculate_bmi(double weight, double height)
{
    return (weight / (height * height / 10000));
}

int main()
{
    double a, b;

    cout << "Enter your weight in kilograms: ";
    cin >> a;

    cout << "Enter your height in centimeters:";
    cin >> b;

    cout << endl << "Your bmi is: " << calculate_bmi(a, b);

    return 0;
}
