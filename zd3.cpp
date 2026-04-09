#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    if (n == 12 || n == 1 || n == 2) {
        cout << "Зима" << endl;
    } else if (n == 3 || n == 4 || n == 5) {
        cout << "Весна" << endl;
    } else if (n == 6 || n == 7 || n == 8) {
        cout << "Лето" << endl;
    } else if (n == 9 || n == 10 || n == 11) {
        cout << "Осень" << endl;
    } else {
        cout << "Ошибка" << endl;
    }

    return 0;
}
