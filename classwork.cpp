#include <iostream>
using namespace std;

int main() {
    float unit_price, quantity, amount_paid, discounted_amount, change;
    int customer_month;

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

    // Step 5: Apply discount for the first three months
    cout << "Enter customer's month (1-12): ";
    cin >> customer_month;
    
    if (customer_month <= 3) {
        discounted_amount = amount_paid * 0.90; // 10% discount
        cout << "Discounted amount: " << discounted_amount << endl;
    } else {
        cout << "No discount for this month." << endl;
    }

    // Step 6: Calculate and display change
    float amount_tendered;
    cout << "Enter amount tendered: ";
    cin >> amount_tendered;

    if (amount_tendered >= discounted_amount) {
        change = amount_tendered - discounted_amount;
        cout << "Change: " << change << endl;
    } else {
        cout << "Insufficient amount tendered." << endl;
    }

    // Step 7: End
    return 0;
}
