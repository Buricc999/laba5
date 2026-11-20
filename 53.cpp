#include <iostream>
#include <clocale>
using namespace std;
int total(int a, int b)
{
    return a + b;
}
int total(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите три оценки: " << "\n";
    cin >> a >> b >> c;
    cout << "Результат двух контрольных: " << total(a, b) << "\n";
    cout << "Результат трёх контрольных: " << total(a, b, c);

}
