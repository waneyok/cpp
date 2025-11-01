#include <iostream>
using namespace std;
#include <clocale>
#include <math.h>
//std::cout << "Hello World!\n";

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true) 
    {
        cout << "Выбери тип приложения: Калькулятор(1) | Другое(0) =  ";
        bool type;
        cin >> type;

        if (type == 1) 
        {
            cout << "Добро пожаловать в калькулятор " << endl;
            double a, b;
            string c;
            cout << "Введите первое число ";
            cin >> a;

            cout << "Введите второе число ";
            cin >> b;

            cout << "Введите операцию: (+, -, *, /, Степень(**) ";
            cin >> c;

            if (c == "+") {
                cout << "Ответ сложения = " << a + b << endl;
            }
            else if (c == "-") {
                cout << "Ответ вычитания = " << a - b << endl;
            }
            else if (c == "*") {
                cout << "Ответ умножения = " << a * b << endl;
            }
            else if (c == "/") {
                cout << "Ответ деления = " << a / b << endl;
            }
            else if (c == "Степень" or "**" or "степень") {
                cout << "Ответ степени = " << pow(a, b) << endl;
            }
            
        }
        else
        {
            while(true)
            {
                cout << "Добро пожаловать в другой тип программы " << endl;

                cout << "Здесь мы можем: " << endl;

                cout << "1) Найти остаток от деления двух чисел " << endl;

                cout << "2) Найти последнее число из любого целого числа " << endl;

                cout << "Что-бы выйти напишите Выход' " << endl;


                int x;
                cin >> x;

                string exit;
                cin >> exit;

                if (x == 1)
                {
                    cout << "Здесь вы можете найти остаток от деления двух целых чисел " << endl;

                    int a, b;

                    cout << "Введите первое число ";
                    cin >> a;

                    cout << "Введите второе число ";
                    cin >> b;

                    cout << "Ваш остаток от деления равен = " << a % b << endl;
                }
                if(exit == "выход")
                {
                    cout << "Возвращаемся к выбору приложения..." << endl;
                    
                }
                break;
                

            }

        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

