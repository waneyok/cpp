#include <iostream>
#include <clocale>
#include <string>
#include <limits>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    while (true) {
        cout << "Выберите тип приложения:\nКалькулятор(1)\nДругое(0)\n= ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "\nДобро пожаловать в калькулятор\n";

            double a, b;
            string operation;

            cout << "Введите первое число: ";
            cin >> a;

            cout << "Введите второе число: ";
            cin >> b;

            cout << "Введите операцию (+, -, *, /, степ): ";
            cin >> operation;

            if (operation == "+") {
                cout << "Ответ сложения = " << a + b << endl;
            } else if (operation == "-") {
                cout << "Ответ вычитания = " << a - b << endl;
            } else if (operation == "*") {
                cout << "Ответ умножения = " << a * b << endl;
            } else if (operation == "/") {
                if(b != 0){
                    cout << "Ответ деления = " << a / b << endl;
                } else {
                    cout << "Ошибка: деление на ноль невозможно.\n";
                }
            } else if (operation == "степ" || operation == "**") {
                cout << "Ответ степени = " << pow(a, b) << endl;
            } else {
                cout << "Неподдерживаемая операция. Попробуйте ещё раз.\n";
            }

            cout << "Хотите вернуться в главное меню? (Да/Нет): ";
            string answer;
            cin >> answer;

            if(answer == "нет" || answer == "Нет"){
                cout << "Завершение программы...\n";
                break;
            }
        } else if(choice == 0) {
            while(true) {
                cout << "\nДобро пожаловать в другой тип программы\n";
                cout << "Здесь мы можем:\n";
                cout << "1) Найти остаток от деления двух чисел\n";
                cout << "2) Найти последнюю цифру целого числа\n";
                cout << "Чтобы выйти, введите 'выход'\n";

                string command;
                cin >> command;

                if(command == "1") {
                    int num1, num2;
                    cout << "Введите два числа: ";
                    cin >> num1 >> num2;
                    cout << "Остаток от деления: " << num1 % num2 << endl;
                } else if(command == "2") {
                    long number;
                    cout << "Введите целое число: ";
                    cin >> number;
                    cout << "Последняя цифра: " << abs(number % 10) << endl;
                } else if(command == "выход") {
                    cout << "Возвращение к главному меню...";
                    break;
                } else {
                    cout << "Некорректный выбор. Повторите попытку.\n";
                }
            }
        } else {
            cout << "Неверный выбор. Выберите 1 или 0.\n";
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // очищаем поток ввода
    }

    return 0;
}