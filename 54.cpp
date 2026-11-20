#include <iostream>
#include <clocale>

using namespace std;
void printStudent(int number, int group = 1)
{
    cout << "Студент №" << number << ", группа: " << group << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    printStudent(100);
    printStudent(25, 3);

    return 0;
}
