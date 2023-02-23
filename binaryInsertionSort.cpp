#include <iostream>
using namespace std;

void binaryInsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        int left = 0, right = j;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (a[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        j = left;
        for (int k = i - 1; k >= j; k--) {
            a[k + 1] = a[k];
        }
        a[j] = x;
    }
}

int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++){
       cin>>a[i];
    }
    binaryInsertionSort(a, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
