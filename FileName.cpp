#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    cout << "               Угадай число от 1 до 10\n";
    cout << "Выберите опцию:\n";
    cout << "1. Играть\n";
    cout << "2. Выйти\n";
    int choice;
    cout << "-> ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Начинаем игру!" << endl;
        cout << "Угаданных чисел 0 из 3" << endl;
        cout << "Попыток осталось: 5" << endl;
        int number = rand() % 10 + 1; // Генерируем случайное число от 1 до 10
        int guess;
        int attempts = 5;
        int correctGuesses = 0;
        while (attempts > 0 && correctGuesses < 3)
        {
            cout << "Введите ваше предположение: ";
            cin >> guess;
            if (guess == number && guess != 0 && guess <= 10)
            {
                cout << "Поздравляем! Вы угадали число!" << endl;
                correctGuesses++;
                number = rand() % 10 + 1; // Генерируем новое число для следующей попытки
            }
            else
            {
                cout << "Неправильно. Попробуйте снова." << endl;
            }
            attempts--;
            cout << "Угаданных чисел " << correctGuesses << " из 3" << endl;
            cout << "Попыток осталось: " << attempts << endl;
        }
        if (correctGuesses == 3)
        {
            cout << "Поздравляем! Вы выиграли!" << endl;
        }
        else
        {
            cout << "Игра окончена. Вы не угадали все числа." << endl;
        }
    }
    else if (choice == 2)
    {
        cout << "Спасибо за игру! До свидания!" << endl;
    }
    else
    {
        cout << "Неверный выбор. Пожалуйста, выберите 1 или 2." << endl;
    }
    return 0;
}