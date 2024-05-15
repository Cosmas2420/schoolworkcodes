#include <iostream>
using namespace std;

int main() {
    float unit_price, quantity, amount_paid, discounted_amount;

    // Step 1: Accept unit price
    cout << "Enter unit price: ";
    cin >> unit_price;

    // Step 2: Accept quantity
    cout << "Enter quantity: ";
    cin >> quantity;

    // Step 3: Calculate amount paid
    amount_paid = unit_price * quantity;

    // Step 4: Display amount paid
    cout << "Amount paid: " << amount_paid << endl;

    // Step 5: Apply discount if amount paid is greater than 500
    if (amount_paid > 500) {
        discounted_amount = amount_paid * 0.90; // 10% discount
        cout << "Discounted amount: " << discounted_amount << endl;
    }

    // Step 6: End
    return 0;
}
