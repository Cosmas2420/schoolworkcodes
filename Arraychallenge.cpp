#include <iostream>
using namespace std;
int main(){
//A program which prompts the user to;
//specify the size of an array.
//enables the user to enter elements in to an array
//it should desplay the elements that have been entered.
int size;

    cout << "Enter the size of the array:" <<endl;
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Elements in the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}   