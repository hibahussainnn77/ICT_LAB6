#include <iostream>

using namespace std;

int main() {
    int limit = 0;
    cout << "Enter limit (2 to 100): ";
    cin >> limit;
    int primeCounttt = 0;
    int primeSum = 0;
    cout << "Prime channels: ";
    for (int candidate = 2; candidate <= limit; ++candidate) {
        bool isPrime = true;
        for (int divisor = 2; divisor < candidate; ++divisor) {
            if (candidate % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << candidate << " ";
            primeCounttt++;
            primeSum += candidate;
        }
    }
    cout << "Total Prime Count: " << primeCount << endl;
    cout << "Total Prime Sum: " << primeSum << endl;

    return 0;
}

