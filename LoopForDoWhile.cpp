#include <iostream>
using namespace std;

int main() {
    // Iteration using for loop
    for (int i = 0; i < 5; i++) {
        cout << "Iteration: " << i <<endl;
    }

    //Iteration using while loop
    int j = 0;
    while (j < 5) {
        cout << "Iteration: " << j <<endl;
        j++;
    }

    // Iteration using do...while loop
    int k = 0;
    do {
        cout << "Iteration: " << k << endl;
        k++;
    } while (k < 5);

    return 0;
}
