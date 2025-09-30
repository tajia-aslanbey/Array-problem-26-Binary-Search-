#include <iostream>
#include <algorithm>
using namespace std;

int a[100000];

int main() {
    int N, Q;
    cin >> N >> Q;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N);
    while (Q--) {
        int x;
        cin >> x;
        if (binary_search(a, a + N, x)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }
    return 0;
}
