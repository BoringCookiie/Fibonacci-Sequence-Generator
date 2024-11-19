#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;
    generateFibonacci(num);
    return 0;
}
