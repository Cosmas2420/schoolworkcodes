#include <iostream>
using namespace std;
int main() {
    int x = 10;

    // Selection using if...else
    if (x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is not greater than 5" << endl;
    }

    // Selection using switch
    switch (x) {
        case 5:
            cout << "x is 5" << endl;
            break;
        case 10:
            cout << "x is 10" << endl;
            break;
        default:
            cout << "x is neither 5 nor 10" << endl;
    }

    return 0;
}
