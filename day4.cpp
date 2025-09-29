#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascal(int n) {
    vector<vector<int>> triangle(n);

    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1; // first and last element are always 1

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    vector<vector<int>> pascal = generatePascal(n);

    cout << "Pascal's Triangle:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
