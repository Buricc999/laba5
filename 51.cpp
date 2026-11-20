#include <iostream>
#include <clocale>
using namespace std;
int addPoints(int score, int bonus)
{
    return score + bonus;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int score, bonus;
    cout << "Введите рекорд и бонус" << "\n";
    cin >> score >> bonus;

    cout << "Исходный рекорд: " << score << "\n" << "Cумма баллов: " << addPoints(score, bonus);

}
