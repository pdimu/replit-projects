#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 20;
    int number = a;

    cout << "Using while loop: ";
    while(number <= b) {
        if(number % 3 == 0) {
            cout << number << " ";
        }
        number++;
    }

    cout << "\nUsing for loop: ";
    for(int num = a; num <= b; num++) {
        if(num % 3 == 0) {
            cout << num << " ";
        }
    }

    cout << "\nUsing do-while loop: ";
    number = a;
    do {
        if(number % 3 == 0) {
            cout << number << " ";
        }
        number++;
    } while(number <= b);

    return 0;
}