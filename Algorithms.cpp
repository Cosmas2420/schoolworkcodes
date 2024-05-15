//Write a program which accepts user inputs an array(int).
//The program should select and display the largest number
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: "<<endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " integers:" <<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The largest number in the array is: " << max << endl;

    return 0;
}
