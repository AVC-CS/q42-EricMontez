#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RATE2  = 1.10;
    const double RATE6  = 2.20;
    const double RATE10 = 3.70;
    const double RATE20 = 4.80;
    double weight, distance, dRate, price;

    cout << "Enter the package weight and distance\n";
    cin >> weight >> distance;

    // TODO: validate input - weight must be > 0 and <= 20
    if (weight <= 0 || weight > 20)
    {
        cout << "Invalid weight. Weight must be > 0 and <= 20 kg." << endl;
        return 1; // Exit with no error
    }
    // TODO: validate input - distance must be >= 10 and <= 3000
    if (distance < 10 || distance > 3000)
    {
        cout << "Invalid distance. Distance must be >= 10 and <= 3000 miles." << endl;
        return 1; // Exit with no error
    }
    // TODO: determine rate based on weight
    if (weight <= 2)
        dRate = RATE2;
    else if (weight <= 6)
        dRate = RATE6;
    else if (weight <= 10)
        dRate = RATE10;
    else
        dRate = RATE20;
    // TODO: calculate price based on distance
    if (distance > 500)
        price = dRate * (distance / 500);
    else
        price = dRate;
    // Use the following statements to print output
    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is " << price << endl;

    return 0;
}
