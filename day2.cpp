#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least 2 elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
        cout << "No second maximum (all elements are same)." << endl;
    else
        cout << "Second maximum element is: " << secondMax << endl;

    return 0;
}
