#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 89, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum Element: " << maxElement << endl;

    return 0;
}
