#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    double x0, y0, r1, r2, x, y, L;

    cout << "Введите координаты центра кольца (x0, y0): ";
    cin >> x0 >> y0;

    cout << "Введите радиусы кольца (r1, r2): ";
    cin >> r1 >> r2;

    cout << "Введите координаты точки (x, y): ";
    cin >> x >> y;

    // Вычисление расстояния от центра до точки
    L = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

    // Проверка принадлежности точки кольцу
    if (L >= r1 && L <= r2) {
        cout << "Точка принадлежит кольцу." << endl;
    }
    else {
        cout << "Точка не принадлежит кольцу." << endl;
    }

    return 0;
}