#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Vârsta primului copil: ";
    cin >> a;

    cout << "Vârsta a celui de-al doilea copil: ";
    cin >> b;

    if (a > b) {
        cout << "Primul copil e mai mare cu " << (a - b) << " ani.\n";
    } else if (b > a) {
        cout << "Al doilea copil e mai mare cu " << (b - a) << " ani.\n";
    }
    return 0;
}