//Створити стек цілих чисел. Обчислити кількість парних елементів стеку.
#include <iostream>
#include <stack>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251); // Установка української локалізації для виводу
    stack<int> s;
    int n, x, evenCount = 0; // Змінна для підрахунку парних елементів

    cout << "Введіть кількість елементів: ";
    cin >> n;
    cout << "Введіть " << n << " елементів:\n";

    // Введення елементів у стек
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);
    }

    // Обчислення кількості парних елементів
    while (!s.empty()) {
        int element = s.top();
        s.pop();

        if (element % 2 == 0) { // Перевірка на парність
            evenCount++;
        }
    }

    cout << "Кількість парних елементів у стеку: " << evenCount << endl;
    return 0;
}


