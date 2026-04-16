#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, temp3;

    // Input temperatures
    cout << "Enter the first temperature reading: ";
    cin >> temp1;

    cout << "Enter the second temperature reading: ";
    cin >> temp2;

    // Check second reading conditions
    int increase1 = temp2 - temp1;

    if (increase1 > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (increase1 < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }

    cout << "Enter the third temperature reading: ";
    cin >> temp3;

    // Final check after third reading
    if (temp3 >= 150 && temp3 <= 190) {
        cout << "You may start frying the Magwinyas." << endl;
    } else {
        cout << "Oil is not ready for frying!" << endl;
    }

    return 0;
}
