#include <iostream>

using namespace std;

int n;
int a[1002];

void countingSort (int a[], int n) {
    int cnt[105] = {0};
    for (int i = 1; i <= n; i++) {
        cnt[a[i]] ++;
    }


    int m = 0;
    for (int i = 1; i <= 100; i++) {
        while (cnt[i] > 0) {
            m ++;
            a[m] = i;
            cnt[i]--;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}

int main () {
    int n;
    cin >> n;
    int a[10000];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    countingSort (a,n);
    return 0;
}