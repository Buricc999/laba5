#include <iostream>
#include <clocale>

using namespace std;
void increaseMark(int& mark)
{
    if(mark<10)
    mark++;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int mark;
    cout << "Введите оценку" << "\n";
    cin >> mark;
    if (mark < 0 || mark > 10)
    {
        cout << "Ошибка ввода" << "\n";
        return 0;
    }
    cout << "Оценка до вызова: " << mark << "\n";
    increaseMark(mark);
    cout << "Oценка после вызова: " << mark;

        
       
       


}

