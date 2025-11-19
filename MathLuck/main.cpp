#include <iostream>
using namespace std;

int main()
{
    int speed, time, distance;

    time = 4, distance = 20;
        
    cout << "\nСпортсмен пробежал " << distance << " километров за " << time << " часов. ";
    cout << "Он все время бежал с одной и той же скоростью. Чему она равна?\nОтвет (в км/ч): ";

    cin >> speed;

    if(speed == (distance / time)) cout << "Верно!\n";
    else cout << "Неверно!\n";
}
