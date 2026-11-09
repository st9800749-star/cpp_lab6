#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int N;
    int sum = 0;

    cout << "Введіть натуральне число N: ";
    cin >> N;

    int temp = N;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit < 7) {
            sum += digit;
        }

        temp /= 10;
    }

    cout << "Сума цифр числа " << N << ", які менші за 7, дорівнює: " << sum << endl;

    return 0;
}